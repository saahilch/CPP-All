#include<iostream>
#include<fstream>
using namespace std;
class Student{
	private :int rollno;
	         char name[50];
	         double per;
	public:void accept(){
		    cout<<"Enter Rollno"<<endl;
		    cin>>rollno;
		    cout<<"Name"<<endl;
		    cin>>name;
		   cout<<"Per:"<<endl;
		   cin>>per;
		   
		   
	       }
		   void display(){
		   	cout<<rollno<<"   "<<name<<"   "<<per<<endl;
		   }		  
	
	
};
int main3(){
	
//	Student s1;
//	s1.accept();//
//	//this s1 object store into file
//	//write operation
//	ofstream outFile("Student.dat");
//	//store s1 
//	outFile.write((char*)&s1,sizeof(Student));
//	//above operation will store s1 into file
//	cout<<"Student get stored into File"<<endl;
//	outFile.close();
	
	//read data from file
	Student s2;
	ifstream inputFile("Student.dat");
	inputFile.read((char*)&s2,sizeof(Student));
	s2.display();
	inputFile.close();
	
	
	
	
	
}







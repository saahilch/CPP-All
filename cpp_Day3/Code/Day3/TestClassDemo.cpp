#include<iostream>
using namespace std;

class Student{
	//data members:attributes
private: int rollno;//rollno is accessible inside class only

//behaviour:method/function

public :void display(){
	cout<<"Thsi is student Demo  "<<rollno<<endl;
}

};
struct IacsdStud{
	int rollno;
};
//
int main1(){

IacsdStud isd;
isd.rollno=9090;

//client 	
//to access Student class
//create an object of type Student
//display();
Student stdObj;
stdObj.display();
 


	
	
	return 0;
}
 

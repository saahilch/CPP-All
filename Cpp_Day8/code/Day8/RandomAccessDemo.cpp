#include<iostream>
#include<fstream>
using namespace std;
int main(){
	//random access
	
	//read data from file file_data
	string line;
	ifstream input("file_data.txt");
	
	cout<<"\nNow the position of the file pointer is "<<input.tellg();

	//show all lines
	
	while(getline(input,line))
     {
     	cout<<line<<endl;
	
	}
	//	
		cout<<"\nNow the position of the file pointer is "<<input.tellg();
cout<<"\n"<<endl;
input.clear();
input.seekg(12);
cout<<"Skip firt 12 from file \n"<<endl;
cout<<endl;
	while(getline(input,line))
     {
     	cout<<line<<endl;
	
	}	
}

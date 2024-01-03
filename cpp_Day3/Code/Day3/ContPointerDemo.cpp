#include<iostream>
using namespace std;

int main5()
{   const int no2=200;
	const int no1=100;//no is constant no is read-only
	cout<<"const no1:"<<no1<<endl;
	
	const int *ptr1=&no1;//pointer to const int
	cout<<"ptr1 "<<*ptr1<<endl;
//	*ptr1=7070;//not valid    error:compile time
	
	ptr1=&no2;//valid
	
	cout<<"constant pointer"<<endl;
	
	int x=340;
	int *const ptr2=&x;
	cout<<"Ptr2 "<<ptr2<<"    "<<*ptr2<<endl;
	
	*ptr2=680;
	int no4=909;//valid 
	cout<<"Ptr2 "<<ptr2<<"    "<<*ptr2<<endl;
	//ptr2=&no4;//invalid : error:address is red only
	
	return 0;
}

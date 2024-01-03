#include<iostream>
using namespace std;


int main4()
{
	cout<<"Pointers Demo"<<endl;
	int arr[]={12,3,4,5,64,23};
	
	//create pointer
	int *ptr=arr;
	cout<<"ptr "<< ptr<< "    arr="<<&arr<<endl;
	cout<<"   "<<*ptr<<endl;//first element from array
	
	//show array
	for(int i=0;i<6;i++){
		cout<<ptr+i<<"  "<<*(ptr+i)<<endl;
	}
	
	//
	
	
	
	return 0;
}

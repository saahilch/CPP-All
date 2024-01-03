#include<iostream>
using namespace std;
int main64()
{
	int a=90;
    int arr[5]={34,5,67,8,9}; 	
	//show all elements from arr
//	cout<<arr[0]<<endl;
//	cout<<arr[1]<<endl;
//	cout<<arr[2]<<endl;
//	cout<<arr[3]<<endl;
//	cout<<arr[4]<<endl;
	for(int i=0;i<5;i++){
		cout<<arr[i]<<"  ";
	}
	cout<<"\n------accept array elements from user-----"<<endl;
	int arr1[5];
	int no;
	for(int i=0;i<5;i++){
	cout<<"Enter Number:";	
	cin>>no;
	arr1[i]=no;//i=1  no=110  arr1[1]=110 
	}
	
 cout<<"\n------ array elements from Array-----"<<endl;
   for(int i=0;i<5;i++){
   	
	cout<<arr1[i]<<"  ";
}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

#include<iostream>
using namespace std;

int main()
{
	int i=1;
	while(i<=10)
	{
		cout<<i<<"  ";//i=1 2 3 4 5 6 7 8 9 10
		i++;//11
	}
	cout<<"\n enter no:"<<endl;
	int no;
	cin>>no;
	int sum=0;
	while(no>0)
	{
    //sum=sum+no;
	//or
	sum+=no;	
	cout<<"Enter No "<<endl;
	cin>>no;	
	}
	cout<<"Sum Of All Numbers:"<<sum;
	
	//using while loop
	//print all even  numbers between 1- 50
	//print all odd numbers between 1- 50
	//prime    numbers between 1- 50
	//print table of 2,3,4
	
	
	
	
	return 0;
}

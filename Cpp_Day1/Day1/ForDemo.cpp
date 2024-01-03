#include<iostream>
using namespace std;
int main6()
{
	int i;
	cout<<"Print first 10 numbers"<<endl;
	for(i=1;i<=10;i++)
	{
	cout<<i<<"   ";	
	}
	cout<<"\n------------------"<<endl;
	for(i=10;i>=1;i--){
		cout<<i<<"   ";
	}
	cout<<"\n------even numbers between 1 to 50------------\n"<<endl;	
	for(i=1;i<=50;i++)
	{
		if(i%2==0)
		cout<<i<<"   ";
	}
	
	
	
	
}

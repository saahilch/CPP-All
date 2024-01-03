#include<iostream>
using namespace std;

void swapping(int a,int b)//pass by value
{
	int temp=a;
	a=b;
	b=temp;
	cout<<"inside swap a="<<a<<"   b="<<b<<endl;//20 10 
}
void swappingByRef(int &a,int &b)//pass by value
{
	cout<<"Swapping By ref"<<endl;
	int temp=a;
	a=b;
	b=temp;
	cout<<"inside swap a="<<a<<"   b="<<b<<endl;//20 10 
}
int main()
{
	int m=10;
	int &refM=m;
	cout<<"M="<<m<<"    "<<&m<<endl;
	cout<<"RefM="<<refM<<"    "<<&refM<<endl;;
	
	
	cout<<"----swapping-----"<<endl;
	int a=10,b=20;
	cout<<"befor swap a="<<a<<"   b="<<b<<endl;//10 20
	swapping(a,b);//pass by value
	cout<<"after swap a="<<a<<"   b="<<b<<endl;//
	
	cout<<"----swapping-----"<<endl;
	a=90,b=80;
	cout<<"befor swap a="<<a<<"   b="<<b<<endl;//10 20
	swappingByRef(a,b);//pass by ref
	cout<<"after swap a="<<a<<"   b="<<b<<endl;//

	
	
	
}

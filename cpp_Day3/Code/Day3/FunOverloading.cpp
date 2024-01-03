#include<iostream>
using namespace std;


inline int getMax(int a,int b){
	
//	if(a>b)
//	return a;
//	else
//	return b;
	int m=(a>b)?a:b;//
	return m;
	
}
void show(){
	cout<<"This is show()"<<endl;
}
void show(int no){
	cout<<"This is show()"<<no<<endl;
}
void show(int a,double b){
	cout<<" show(i,b) "<<a<<"  "<<b<<endl;
}
void show(double d1,double d2){
	cout<<"show(d1,d2):"<<d1<<"   "<<d2<<endl;
}
void show(double d,int a){
	cout<<"show(d,a)"<<d<<"  "<<a<<endl;
	//BL
}
int main2()
{
	//compile time compiler knwos which method to call
	//this is 
	//compile time binding or static binding or early binding
	//function overloading is compile time binding
	show();//0 args
	show(67);//compiler error
	int a=10;
	double d=90.34;
	show(a,d);//
    show(d,d);
    show(d,a);
    
    
    int i=10,j=90,k;
    k=getMax(i,j);// get epanded like (a>b)?a:b;
    cout<<"Max "<<k<<endl;
    
	return 0;
}

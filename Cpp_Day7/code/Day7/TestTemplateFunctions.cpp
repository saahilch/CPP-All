#include<iostream>
using namespace std;
//create templete function
template<class T> void swapGen(T &a,T &b){
	T temp=a;
	a=b;
	b=temp;
	cout<<"Swapping  a:="<<a<<"    b:="<<b<<endl;
	
}
void swap1(int &i,int &j){
	int temp=i;
	i=j;
	j=temp;
}
void swap1(double &i,double &j){
	double temp=i;
	i=j;
	j=temp;
}


int main1(){
	int a=10,b=90;
	//swap1(a,b);
	swapGen(a,b);//at this call T->int
	double d1=90.34,d2=34.45;
//	swap1(d1,d2);
swapGen(d1,d2);//T--->double
char c1='A',c2='B';
swapGen(c1,c2);//T-->char
	return 0;
	
	
}



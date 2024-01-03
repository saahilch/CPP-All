#include<iostream>
using namespace std;
int main1(){
	
	int a,b,c;
	//identify block of code
	try{	 
	cout<<"No1 No2 "<<endl;
	cin>>a>>b;
	c=a+b;
	cout<<"Add="<<c<<endl;
	c=a-b;
	cout<<"Subs="<<c<<endl;
	if(b<0){
		throw " Number Is <0";
		cout<<"--This is code after throw----  "<<endl;
	}
	if(b==0)
	{
		throw 909;
	}	
	c=a/b;
	cout<<"Div="<<c<<endl;
	c=a*b;
	cout<<"Multi="<<c<<endl;
}
catch(int no){
	cout<<"---Divide by Zero----"<<endl;
}
catch(double d){
	
}
catch(const char* str){
	cout<<"Error:"<<str<<endl;
}
catch(...){
	cout<<"---exception----"<<endl;
}
	
	cout<<"--------------end of main----------";
	return 0;
//	int c1=90;
}

#include<iostream>
using namespace std;

int main4()
{
//
int a,b;
cout<<"enter no1 no2:"<<endl;
cin>>a>>b;
//if
//cout<<"-----if------"<<endl;
//if(a>b){
//cout<<"max="<<a<<endl;
//}
cout<<"------if else-----"<<endl;

//if(a>b)
//{
//cout<<" a is max="<<a<<endl;	
//}
//else
//{
//	cout<<" b is max="<<b<<endl;
//}

cout<<"-----if else if ------"<<endl;	
 if(a>b)
cout<<"a is max:"<<a<<endl;
else if(a<b)
cout<<"b is max:"<<b<<endl;
else
cout<<"a==b"<<endl;
cout<<"------switch case-----"<<endl;
cout<<"enter month number";
int month;
cin>>month;
if(month==1){
	cout<<"jan"<<endl;
}
else if(month==2){
cout<<"feb"<<endl;}
else if(month==3){	
cout<<"march"<<endl;}
else if(month==4)
cout<<"apr"<<endl;
else if(month==5)
cout<<"may"<<endl;
else if(month==6)
cout<<"june"<<endl;
	else
	cout<<"invalid month";
	
return 0;	
}

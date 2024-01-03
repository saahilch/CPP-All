#include<iostream>
using namespace std;

void changeValue(int no){
	//no=10
	
	cout<<"inside changeValue...."<<endl;
	no=no+100;//no=110
	
	cout<<"Inside ChangeValue   :"<<no<<endl;//110
}
void changeValueByPtr(int *no){
	//no=10
	
	cout<<"inside changeValue...."<<endl;
	*no=*no+100;//no=110
	
	cout<<"Inside ChangeValue   :"<<*no<<endl;//110
}

//
int main1()
{
	int a=10;//10
	cout<<"Before ChangeValue  "<<a<<endl;//10
	changeValue(a);//ByValue
	cout<<"After ChangeValue  "<<a<<endl;//10
   //by Reference
   int &refA=a;
   changeValue(a);
   cout<<"After ChangeValue  "<<a<<endl;//10
  
  //create pointer variable to hold address of a
  int *ptr=&a;
  
  cout<<"a is stored at :"<<&a<<endl;
  cout<<"ptr is stroing value   "<<ptr<<endl;
  cout<<" value to ptr is pointing :"<<*ptr<<endl;	
  changeValueByPtr(&a);//pass by Address
 cout<<"After ChangeValue  "<<a<<endl;//
 //LAb:do swapping using pointers
	return 0;
}

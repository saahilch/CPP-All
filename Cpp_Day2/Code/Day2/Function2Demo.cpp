#include<iostream>
using namespace std;

void showData(int no1,int no2){
	cout<<"No1="<<no1<<"     No2="<<no2<<endl;
}
void displayData(int no1 ,int no2=1001)
{
	cout<<"No1="<<no1<<"     No2="<<no2<<endl;	
}
int main4()
{
	int x=10,y=40,z=90;
	showData(x,y);
	showData(y,z);
	//showData(x);//compile time error
	cout<<"----default-----"<<endl;
	displayData(x,z);
	//displayData();//compileTime Error
	displayData(y);//no compile time error
}

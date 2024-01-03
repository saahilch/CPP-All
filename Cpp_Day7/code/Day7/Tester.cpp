#include<iostream>
#include"Bank.h"
using namespace std;

int main(){
	try{
	 
	typedef Bank::BankAccount  AxisBank;
	Bank::BankAccount bk(5000);
	Bank::BankEmployee be;
	AxisBank act3(10000);
	act3.display();
	cout<<"Enter Amount To Withdraw:"<<endl;
	double  amount;
	cin>>amount;
	act3.withdraw(amount);
	
	act3.display();
	
	
}catch(Bank::BankException &bk){
	   //bk.show();
	cout<<"Bank Exception : "<<bk.message;
}
catch(int a){
	
}
catch(const char*){
	
}	
catch(...){
	cout<<"Exception:"<<endl;
}	
	
}

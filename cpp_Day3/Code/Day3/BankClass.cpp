#include<iostream>
using namespace std;
class Account{
	//data members
	private :int actno;
	         double balance;
	         string name;
	         
	public ://declare
	     void withdraw(double amount);
	
	void showAccountDetails()
	{	cout<<"AccountId:"<<actno<<endl;
		cout<<"name:"<<name<<endl;
		cout<<"balance:"<<balance<<endl;	 	
	}
	void deposite(double amount){
		balance=balance+amount;
		cout<<"after deposite balance="<<balance<<endl;
	}

void acceptDetails()
{
	cout<<"Enter ActId:  ";
	cin>>actno;
	cout<<"Name:  ";
	cin>>name;
	cout<<"Balance: ";
	cin>>balance;
}




};

void Account::withdraw(double amount){
	cout<<"inside withdraw  "<<endl;
	balance=balance-amount;
	cout<<"After withdraw  "<<balance<<endl;
}

int main()
{
	//create an object of class
	Account act1;
	act1.acceptDetails();
	cout<<"------------------"<<endl;
	act1.showAccountDetails();
//10 

    Account act2;//another object of Account class
	act2.acceptDetails();
	cout<<"--------------"<<endl;
	act2.showAccountDetails();
	
	cout<<"------------------"<<endl;
	cout<<"Enter Amount To Deposite:";
	int amount;
	cin>>amount;
	act2.deposite(amount);
	cout<<"--------------"<<endl;
	act2.showAccountDetails();
	act2.withdraw(1000);
	
	
	
	
}

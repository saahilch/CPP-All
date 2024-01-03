#include<iostream>
using namespace std;
namespace  Bank{
	
	class BankException {
		
		public:string message;
		public :BankException(string msg){
			this->message=msg;
		}
		
		   void show(){
			cout<<"Low Balance Bank Exception :"<<endl;
	     	}
			
	};
	
	class BankAccount{
		double balance;
		public :BankAccount(double balance){
			this->balance=balance;
		}
	void withdraw(double amount){
		BankException  minEx("MinimumBalance");
		BankException  amtEx("amount>bal");	
			
		if(this->balance<5000){
			throw minEx;	
			}
		if(amount>this->balance){
			 throw amtEx;//throw UserDef Exception
		}
		cout<<"Inside Withdraw "<<endl;
		this->balance=this->balance-amount;
			cout<<"After Withdraw   "<<this->balance<<endl;
	}	
	void display(){
		cout<<"BAlance="<<balance<<endl;
	}	
		
	};
	
	class BankEmployee{
		
	};
	class BankOperations{
		
	};
	
}

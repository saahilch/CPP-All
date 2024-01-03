#include<iostream>
using namespace std;
class Account{
	private :double balance;
	public :Account(double bal){
		this->balance=bal;
		
	}
	//get balance using getter
	
	double getBalance()const{
		//using const_cast inside const method
		//use const_cast for allowing modification of data member 
		//in this method
		(const_cast<Account*>(this))->balance=balance+1000;
		//this->balance=balance-1000;
		return this->balance;
	}

};

int main(){
	Account a1(5000);
	
	cout<<"Balance:"<<a1.getBalance();
	
	//
	//convert float into int
	float f=20.90;
	int b=f;//implicit
	cout<<"int:"<<b<<endl;;
	
	//using static cast
	int c=static_cast<int>(f);
	cout<<"casted float into int:"<<c<<endl;
	
	//const cast:
	// const_cast is a type of casting operator used to add or remove the         const qualifier        from a pointer, reference, or object
	
	const int cnst=120;
  //	cnst=9000;
	int &y=const_cast<int&>(cnst);

	cout<<"const:"<<cnst<<"    ref:"<<y<<endl; 
	y++;	
	cout<<"const:"<<cnst<<"    ref:"<<y<<endl; 
	
	
	
	
	
}

#include<iostream>
using namespace std;
class MyClass{
	private:int no1,no2;
	public:MyClass(int no1,int no2){
		this->no1=no1;
		this->no2=no2;
	}
  void display(){
  	cout<<"No1 "<<no1<<"    No2 :"<<no2<<endl;
  }
  
  friend void ChangeNumbers(MyClass &obj);//declaration	
};

void ChangeNumbers(MyClass &obj){
	cout<<"Friend Function Changing No1 And No2 Of myClass "<<endl;
	obj.no1=300;
	obj.no2=400;
	cout<<"Numbers Are Getting Changed  :"<<endl;
	obj.display();
}


void showNumbers(MyClass &obj){
	 
	obj.display();//no access to No1 No2
}

int main1(){
	MyClass m1(12,34);
	m1.display();
//	m1.display();
	ChangeNumbers(m1);
	
	
}










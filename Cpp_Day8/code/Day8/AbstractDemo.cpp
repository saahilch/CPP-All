#include<iostream>
using namespace std;
class shape{
	public:virtual void area()=0;//abstract  method
	      void disp(){
	     	cout<<"---display shape-----"<<endl;
		 }
};
class square:public shape{
	public:void area(){
	cout<<"---square area-----"<<endl;	  
	}
	void showDetails(){
			cout<<"---Show Square Details----"<<endl;	  
	}
	 
};
 
 int main1(){
    square sq;
    sq.disp();
    
  //s.area();	
 	
 	
 }

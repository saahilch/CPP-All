#include<iostream>
using namespace std;

class Shape{
	
	public : virtual void area()=0;//abstract method
	   void display(){
	   	cout<<"----this is By Shape class---"<<endl;
	   }
	
	
	
};
class Square:public Shape{
	//abstract method must be overridien in child class
		public:void area(){
		
		cout<<"  Area Of Square   "<<endl;
	}
	
};
 class Circle:public Shape{
 	public :void area(){
 		
 		cout<<"----area circle----"<<endl;
	 }
 };


int main()
{
//	Shape s;
//	s.area();
	
	Square sq;
	sq.area();
	sq.display();
	Circle c;
	c.area() ;
	c.display();
	return 0;
}

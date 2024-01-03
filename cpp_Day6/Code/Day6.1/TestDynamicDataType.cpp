#include<iostream>
#include"Car.h"
using namespace std;



void displayCars(Car *obj){
	obj->displayDetails();
	cout<<"--------------------"<<endl;
	if(typeid(*obj)==typeid(Sedan)){
 
	Sedan *s=dynamic_cast<Sedan *>(obj);
	s->sedanCarFunctions();}
}
}
int main()
{	
//Base class can hold ref of child class

Sedan s(11,"Abc","red",66666,2);
	displayCars(&s);//Upcasting
	SportsCar sp(222,"Aaaa","ertert",567567,3,5);
	displayCars(&sp);//Upcasting
	
	//
}

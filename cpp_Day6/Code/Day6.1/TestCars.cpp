#include<iostream>
#include"Car.h"
using namespace std;
int main1()
{
	cout<<"------Car--------"<<endl;
	Car car;//stack:modelno,name,color,price
	car.Speed();//car specific methods
	car.displayDetails();

	
	//now create an object of derived class
		cout<<"\n \n--------Sedan  ------"<<endl;
	Sedan   sedan(202,"HondaCity","White",80000,4);// 
	//on stack:modelno name color price + airBags
	sedan.Speed();//as child class dont have method spedd will call parent method
	sedan.sedanCarFunctions();//child class specific
	sedan.displayDetails();//parent class
	
	//now create an object of derived class
	cout<<"\n \n--------SportsCar  ------"<<endl;
	
	SportsCar sportcar(707,"Ferrari","Red",99000,4,4);
	sportcar.Speed();//parent
	sportcar.displayDetails();//parent
	sportcar.startNos();
	
	
	
	// Parent Class object can hold object of Child class
		cout<<"\n \n--------BaseClassPointer  ------"<<endl;
	Car *basePtr=&sedan;//base class pointer holds ref of derived class
	//data type of basePtr
	//compile time:Car
	//run time:Sedan
	
	basePtr->Speed();//as per compiler:Car.Speed();
	
	//to achive dynamic binding
	//create virtual methods in parent class 
	//runtime decision is taken and child class metthod will get invoked
	
	
	
	
	
	
	
	
	
	return 0;
}




#include<iostream>
#include<typeinfo>
#include"Car.h"
using namespace std;
int main6(){
	
	//create collection of Cars
	Car *cars[3];
	
	Car carObj(101,"Nano","Black",60000);//Car
	Sedan sedanObj(102,"Honda","White",80000,2);//Sedan
	SportsCar sportcarObj(103,"Ferrari","Red",99000,4,4);//SP
	
	
	cars[1]=&carObj;
	cars[2]=&sedanObj;//Car holding object of Child
	//ParentClassObj=ChildClass :UpCasting
	cars[0]=&sportcarObj;//Upcasting Car=SportCars
	cout<<"\n\n\n"<<endl;
	for(int i=0;i<3;i++){		
 //typeid checks data type at runtime
	if(typeid(*cars[i])==typeid(Car)){
		cout<<"At index "<<i<<"   Stroing Car Object"<<endl;
		//should call all Car methods
	}else if(typeid(*cars[i])==typeid(Sedan)){
		cout<<"At index "<<i<<"   Stroing Sedan Car Object"<<endl;
	
	//child class specific methods must get called
	//DownCasting:Forcefully converting parent class object into Child
	//dynamic_cast
	Sedan  *objChild= dynamic_cast<Sedan *>(cars[i]);
	//Car class object get downcast into Sedan
	objChild->sedanCarFunctions();//no error
	//RTTI:Run Time Type Identification
	
	}else if(typeid(*cars[i])==typeid(SportsCar)){
		cout<<"At index "<<i<<"   Stroing SportsCar Object"<<endl;
//Car--->SportsCar
//DownCasting   ChildObj=ParentObj
 SportsCar  *objSp=dynamic_cast<SportsCar*>(cars[i]);
objSp->startNos();
	}
	//	cars[i]->Speed();//0-->Car 1--->sedan 2--->sportcar
      // cars[i]->sedanCarFunctions();//compile error


	}
	
	
	
	
	return 0;
}

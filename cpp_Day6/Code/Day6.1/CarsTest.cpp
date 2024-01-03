#include<iostream>
#include"Car.h"
using namespace std;
int main5(){
	
       
 

	Car *cars[3];
	Car car(101,"Nano","Black",60000);//

	Sedan sedan(102,"Honda","White",80000,2);
	SportsCar sportcar(103,"Ferrari","Red",99000,4,4);


//Car *ptr=&sedan;
//ptr->displayDetails();

	cars[0]=&car;
	cars[1]=&sedan;
	cars[2]=&sportcar;
	
	for(int i=0;i<3;i++){
		
		cars[i]->displayDetails();
		
	}
	
	
	
	
	
	
	   
	
	
	
	
	
	
	
	return 0;
}

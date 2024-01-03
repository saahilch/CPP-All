#include<iostream>
#include"Car.h"
using namespace std;

int main4()
{
	Car car1(333,"Amez","Blue",56000);
	
	Car car3(car1);//copy constr is get invoked
	//copy car1 value into newly created object car3
	car3.displayDetails();
	
	
return 0;	
}

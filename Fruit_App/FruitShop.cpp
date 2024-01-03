#include<iostream>
#include"Fruit.h"
#include<typeinfo>
using namespace std;

int main()
{
  Fruit f;
  f.taste();
 cout<<"\n"<<endl;	
 	Apple apple;
 	apple.taste();
 	apple.jam();
	
	cout<<"\n"<<endl;	
	Mango m;
    m.pulp();
    m.taste();
	cout<<"\n"<<endl;	
	
	Orange o;
	o.juice();
	o.taste();
	
		cout<<"\n"<<endl;	
	Fruit *ptr=&o;//Parent=child
	ptr->taste();
	
	
	Fruit *basket[4];
	basket[0]=&f;
	basket[1]=&apple;
	basket[2]=&m;
	basket[3]=&o;
		cout<<"\n"<<endl;	
	for(int i=0;i<4;i++){
		basket[i]->taste();
		if(typeid(*basket[i])==typeid(Orange)){
			cout<<"----Orange Is in Basket----"<<endl;
		Orange *oObj=dynamic_cast<Orange*>(basket[i]);//-;//>juice();
		oObj->juice();
		
		//(dynamic_cast<Orange*>(basket[i]))->juice();
		
		}
		
		
	}
	
 
	
	
	
	return 0;
}

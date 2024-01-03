#include<iostream>
using namespace std;
int main3(){
		int choice;
	cout<<"1: add 2:sub 3:div 4:exit"<<endl;
	do{
 	cout<<"enter choice";
	cin>>choice;	
	switch(choice){
		case 1:cout<<"add"<<endl;
		       break;
		case 2:cout<<"sub"<<endl;
		       break;  
		case 3:cout<<"div"<<endl;
		       break; 
		case 4:cout<<"Exit"<<endl;
		       break;
		default:cout<<"invalid choice"<<endl;
        
			break;   
	}
}while(choice!=4);
	cout<<"----Thank You----";
	
	
	
	
	
	
	
	
}

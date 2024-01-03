#include<iostream>
using namespace std;
int main5(){
	 
	cout<<"1:Pen Rs:10  2:ColorBox 100 3:Bottle 150 4:Exit"<<endl;
	int total=0;
	int ch,qty;
	do{
	 
	cout<<"Enter Choice:  ";
	cin>>ch;
	switch(ch){
	case 1:cout<<"Enter Qty for pen: ";
	       cin>>qty;
		   total+=qty*10;//total=50
	      break;
	case 2:cout<<"Enter Qty color box: ";
	       cin>>qty;
		   total+=qty*100;//total=total+200
	      break;
	case 3:cout<<"Enter Qty Bottle: ";
	       cin>>qty;
		   total+=qty*150;
	     break;
	case 4: break;	
	default:cout<<"Invalid Choice"<<endl;	
	}
	
   }while(ch!=4);
   cout<<"Total Bill="<<total<<endl;
cout<<"-----Thank You----"<<endl;	
	
	
}

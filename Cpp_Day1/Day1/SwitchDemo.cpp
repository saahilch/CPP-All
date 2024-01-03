#include<iostream>
using namespace std;

int main5()
{
cout<<"----menu-----"<<endl;
cout<<"1:add 2: sub 3:div: 4: multi"<<endl;	
int choice;
cout<<"please enter choice:"<<endl;
cin>>choice;	
	
switch(choice){
	
	case 1:cout<<"addition"<<endl;
	       break;		
	case 2:cout<<"substraction"<<endl;
        	break;		  
	case 3:cout<<"division"<<endl;
	       break;
	case 4:cout<<"multi"<<endl;
		  break;	  	  
	default:
		cout<<"invalid choice"<<endl;
		break;
	
}	
	
return 0;	
}

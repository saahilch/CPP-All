#include<iostream>
using namespace std;
int main9()
{
	int no,i;
	cout<<"Enter No";
	cin>>no;
	
//	for(i=2;i<no;i++){
//		
//		if(no%i==0)
//		{
//			cout<<"not prime"<<endl;
//			break;
//		}
//		else
//		{
//			cout<<"prime"<<endl;
//		}
//		
//	}
	
	cout<<"-------------------"<<endl;
	bool flag=true;  //no=9
	for(i=2;i<no;i++){ //i=
		if(no%i==0)//9%3==0?  flag=false
		{
		//	cout<<"not prime"<<endl;
		   flag=false;
			break;
		}	else
		{
			flag=true;
			//cout<<"prime"<<endl;
		}		
	}
	if(flag==true)
	{cout<<"prime"<<endl;
	}
	else
	{
		cout<<"not prime"<<endl;
	}
	
	
	
	
	
	
	
}

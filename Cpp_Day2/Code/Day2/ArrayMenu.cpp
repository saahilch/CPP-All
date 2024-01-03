#include<iostream>
using namespace std;
int main74()
{
	
	cout<<"1:Accept Array 2:Display Array 3:Search No 4: even 5:sum 6:exit"<<endl;
	int i,ch,sum,no;
	int  size;
	cout<<"Enter Size:";
	cin>>size;
	int arr[size];
	bool status=false;
	bool flag=false;
	do{
		cout<<"\n enter Choice:";
		cin>>ch;
		switch(ch){
		case 1: //accept array element
		      status=true;
		      for(i=0;i<size;i++){
		      	cout<<"Enter NO  ";
		      	cin>>arr[i];
			  }
		      break;	
		case 2:
		  if(status==true){
		   
		      for(i=0;i<size;i++){
		      	cout<<arr[i]<<"  ";		       
			  }
		    } else
		    {
		    	cout<<"\nplease add elements in array\n";
			}
		      break;
		case 3:
		    cout<<"Enter Number to search  "<<endl;;
	    	cin>>no;
	    	for(i=0;i<size;i++){
	    		if(arr[i]==no){
	    			flag=true;
				 //cout<<" number is  present"<<endl;;
	    		cout<<arr[i]<<"  ";
	    		break;
	    	}
	    	else
	    	{
	    		flag=false;
	    	//	cout<<"number is not present";
			}
			}
			if(flag==true)
			cout<<"Number is present"<<endl;
			else
			cout<<"number is not present"<<endl;
		
		     break;
		case 4:break;	
		case 5:break;
		case 6:break;
		default:cout<<"invalid"<<endl;
		}
		
	}while(ch!=6);
	cout<<"-----------------"<<endl;
	
	
	
	
	
	
	
	
	
}

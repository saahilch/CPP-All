#include<iostream>
using namespace std;
int main1()
{
	int arr[3][3];
	cout<<"----Array----"<<endl;
	//for loop for row
	for(int row=0;row<3;row++){
		//row=0 1 2
	//for loop fol colms
	for(int col=0;col<3;col++)
	{  //col=0 1 2
	cout<<"Enter: ";
	//cout<<row<<col<<"  ";	
	cin>>arr[row][col];
	}		
		cout<<endl;
	}	
	cout<<"-----show array----"<<endl;
		for(int row=0;row<3;row++){
	for(int col=0;col<3;col++)
    { 
	cout<<arr[row][col]<<" ";
		}
		cout<<endl;		
}
	
	
	
	
	
	
	
	return 0;
}

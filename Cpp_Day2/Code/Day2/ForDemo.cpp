#include<iostream>
using namespace std;

int main1(){

for(int i=1;i<=10;i++){

cout<<i<<"   ";	
}
cout<<endl;
for(int i=1;i<=10;i++){
	if(i==5){
		break;
	}
 cout<<i<<"   ";//	
}

cout<<endl;
for(int i=1;i<=10;i++){
	if(i==5){
	continue;
	}
 cout<<i<<"   ";//	
}
 
return  10;	
}

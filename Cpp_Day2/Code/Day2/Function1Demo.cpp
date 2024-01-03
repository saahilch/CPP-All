#include<iostream>
using namespace std;

//function 1
void show(){
	cout<<"Welcome To IACSD"<<endl;
}
//function 2
void chkePrime(int no){
	bool flag=false;
	//BL
	for(int i=2;i<no;i++){
		if(no%i==0){
			flag=false;
			//cout<<"not prime"<<endl;
			break;
		}
		else
		{
			flag=true;
		//	cout<<"prime"<<endl;
		}
	}
	if(flag==true){
	cout<<no <<" prime"<<endl;	
	}
	else
	cout<<no<<"  Not prime"<<endl;
	
	
}

//write function for finding max btween 2 numbers and will give max num to user
int getMax(int no1,int no2){
int m;
if(no1>no2)
m=no1;
else
m=no2;

return m;//fun will return int number	
}
int main2(){
//show welcome to IACSD 5 times
	
cout<<"----Function Demo----"<<endl;	
//function need to be called explicitly
show();
////function need to be called explicitly
//to check number is prime or not
//call chkprime()
chkePrime(9);
chkePrime(92);
chkePrime(29);
chkePrime(59);
chkePrime(90);


int a=10,b=45;
int x=getMax(a,b);
cout<<"max="<<x<<endl;

cout<<getMax(334,56);

//getMax(23,6,7,1);//compile time

cout<<"------end main-----"<<endl;	
return 1;	
}








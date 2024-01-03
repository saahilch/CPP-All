#include<iostream>
using namespace std;
int main1()
{
//std::cout<<"Welcome To C++"; //when not using namespace
cout<<"Welcome To C++"<<endl;;//using namespce std;
int a,b;
a=10;//at copmilation time
cout<<" value of  a=a"<<endl;
cout<<a<<endl;
cout<<"  value of a="<<a<<endl;;
cout<<"     Enter No1:";
cin>>b;//dynamically (at the time of execution)
cout<<" You Enter:"<<b<<endl;
return 1;	
}

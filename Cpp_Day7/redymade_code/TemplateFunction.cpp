 #include <iostream>  
using namespace std;  
template<class T> T add(T &a,T &b)  
{  
    T result = a+b;  
    return result;  
      
}  
template<class T>void swap1(T &a,T &b)
{
	T temp=a;
	a=b;
	b=temp;
	
}
int main1()  
{  
  int i =2;  
  int j =3;  
  float m = 2.3;  
  float n = 1.2;  
  cout<<"Addition of i and j is :"<<add(i,j);  
  cout<<'\n';  
  cout<<"Addition of m and n is :"<<add(m,n);  
  
  swap1(i,j);
  cout<<"\n Swap:a="<<i<<"   b="<<j;
  return 0;  
}  

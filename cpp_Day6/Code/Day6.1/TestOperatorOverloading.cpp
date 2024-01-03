#include<iostream>
using namespace std;
class Complex{
	int real,img;
	public:Complex(int r,int i){
		this->real=r;
		this->img=i;
	}
	void display(){
		cout<<" Real:"<<real<<"   img:"<<img<<endl;
	}

      //Complex c3=	c1+c2;

    Complex operator+(const Complex &obj){
    	//c1 is invoking operator+
    	//c2 is input parameter   
    	
    	int r1,i1;
    	r1=this->real+obj.real;
    	i1=this->img+obj.img;
    	Complex c3(r1,i1);
    	return c3;
	}

	
};
int main(){
	
	Complex c1(10,20);
	Complex c2(40,50);
	c1.display();
	c2.display();
	cout<<"--------------------"<<endl;
Complex c3=	c1+c2;
	c3.display();
	
	
	
}

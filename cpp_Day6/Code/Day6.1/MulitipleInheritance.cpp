#include<iostream>
using namespace std;
class  A{
	int no1;
	public :A(){
	cout<<"--A constr allocate no1--"<<endl;
	}
	
};
class B:virtual public A{
	int no2;
	public :B(){
		cout<<"--B constr allocate no2--"<<endl;	
	}
	void test()
	{
		cout<<"---test from class B----"<<endl;
	}
};

class C:virtual public A{
	int no3;
		public :C(){
		cout<<"--C constr allocate no3--"<<endl;	
	}
	void test()
	{
		cout<<"---test from class C----"<<endl;
	}
	
};
class D:public B,public C{
	int no4;
		public :D(){
		cout<<"--D constr allocate no4--"<<endl;	
	}
	void test(){
	
	C::test();	
		
	}
};
int main5(){
	
	D dObj;
	
	//dObj.B::test();
	dObj.test();
	
	
}

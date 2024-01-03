#include<iostream>
using namespace std;
//Employee id parent class,base class,super class
class Employee{
		private :void impMethod()
	{
		cout<<"employee class Imp Method private"<<endl;
	}
		public:Employee(){
			cout<<"default Employee"<<endl;
		}
		
		void employeeMethod(){
		cout<<"Employee Specific Methods"<<endl;
	}
	void calsalary(){
		cout<<"Employee calSalary Methods"<<endl;
	}
};

//create class manager as type of employee
//parent--->Employee
//child:Manager

class Manager:public Employee
{

	
	public:void managerMethod(){
		cout<<"Manager Specific Methods"<<endl;
	}
	Manager()
	{
		cout<<"default Manager"<<endl;
	}
};


class SalesManager:public Manager{
	
};

int main(){
	
	Employee emp;//employee
	//emp.employeeMethod();
	cout<<"-----manager --------"<<endl;
 	Manager mgr;//manager
 	mgr.managerMethod();
    mgr.employeeMethod();//manager inherting feature of Employee
   mgr.calsalary();
  
    //emp.managerMethod();
	
	
	
	return 0;
}




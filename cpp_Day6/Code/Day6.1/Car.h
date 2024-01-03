#include<iostream>
using namespace std;
class Car{
	private :int modelno;
	string name,color;
protected:	double price;
    public :
    	//Car car3(car1);
	Car(Car &obj)//copy constructor
	{
	this->modelno=obj.modelno;
	this->name=obj.name;
	this->price=obj.price;
	this->color=obj.color;	
	}
	Car(){
	cout<<"default constr of Car"<<endl;
	this->modelno=101;
	this->name="Car";
	this->color="Black";
	this->price=50000;
        }

        Car(int modelno,string name,string color,double price)
        {
        	cout<<"---parameter Car----"<<endl;
        	this->modelno=modelno;
        	this->name=name;
        	this->color=color;
        	this->price=price;
		}

      virtual void Speed(){
       	cout<<"---Car Speed---60km/hr"<<endl;
	   }
      virtual void displayDetails(){
       	cout<<"---Car Details----"<<endl;
       	cout<<modelno<<"   "<<name<<"   "<<color<<"   "<<price<<endl;;
	   }




};

class Sedan:public Car{
	//specialization
private:	int airBags;
public :Sedan(){
	     airBags=1;
}	
Sedan(int modelno,string name,string color,double price,int airBags):Car(modelno,name,color,price)
{
	cout<<"----parameter Sedan----"<<endl;
	this->airBags=airBags;
	}
	void sedanCarFunctions(){
		cout<<"----sedan car specific function-----"<<endl;
	}
	//child class override Speed() from parent	
	//
	void Speed(){
	
       	cout<<"---Sedan Speed---160km/hr"<<endl;
	   }
	   
	   void displayDetails(){
	   Car::displayDetails();
	    
	  //parent class method get called from child class method
       	cout<<"---Sedan Car Details----"<<endl;
       	cout<<" air bags:"<<airBags<<endl;
       //	cout<<modelno<<"   "<<name<<"   "<<color<<"   "<<price<<endl;;
	   }
	
};

class SportsCar:public Car {
	private: int airBags;
	          int nos;
   public:SportsCar(){
   	 airBags=2;
   	 nos=2;
   }
   SportsCar(int modelno,string name,string color,double price,int airbags,int nos):
   Car(modelno,name,color,price){
   	cout<<"----parameter SportsCar----"<<endl;
	   this->airBags=airBags;
   	this->nos=nos;
   }
   void startNos(){
   	cout<<"----starting NOS------"<<endl;
   	
   	
   	
   }
  //hide parent class Speed() using overriding
  void Speed(){
       	cout<<"---SportsCars Speed---260km/hr"<<endl;
	   }
   void displayDetails(){
	   	Car::displayDetails();//parent class method get called
       	cout<<"---Sports Car Details----"<<endl;
       	cout<<" air bags:"<<airBags<<"  NOS:"<<nos<<endl;
       //	cout<<modelno<<"   "<<name<<"   "<<color<<"   "<<price<<endl;;
	   }
  
   	          
};







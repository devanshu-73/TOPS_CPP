/*

	Aggregation : 
	
	"To Combine the common data at a single place/class"
	
	"Here we use data of a class to another class as a reference variable "
	
	"To use a class inside another class as a reference "

*/

#include<iostream>
using namespace std;

class Address{
	public:
		string city;
		int pin;
		string state;
		
		Address(string city,int pin, string state)
		{
			this->city=city;
			this->pin=pin;
			this->state=state;
		}
	
};

class Employee{
	public:
		
		int emp_id;
		string e_name;
		string e_dept;
		Address *address;
		
		Employee(int emp_id,string e_name, string e_dept,Address *address)
		{
			this->emp_id=emp_id;
			this->e_name=e_name;
			this->e_dept=e_dept;
			this->address=address;
		}
		
		void displayE()
		{
			cout<<"Employee Name : "<<this->e_name<<endl;
			cout<<"Employee Id : "<<this->emp_id<<endl;
			cout<<"Employee Department : "<<this->e_dept<<endl;
			cout<<"Employee City : "<<address->city<<endl;
			cout<<"Employee State : "<<address->state<<endl;
			cout<<"Employee Pin : "<<address->pin<<endl;
		}
};

class Workers{
	public:
		int wrk_id;
		string w_name;
		string w_dept;
		Address *address;
		
		Workers(int wrk_id,string w_name, string w_dept,Address *address)
		{
			this->wrk_id=wrk_id;
			this->w_name=w_name;
			this->w_dept=w_dept;
			this->address=address;
		}
		
		void displayW()
		{
			cout<<"\n\n";
			cout<<"Worker Name : "<<this->w_name<<endl;
			cout<<"Worker Id : "<<this->wrk_id<<endl;
			cout<<"Worker Department : "<<this->w_dept<<endl;
			cout<<"Worker City : "<<address->city<<endl;
			cout<<"Worker State : "<<address->state<<endl;
			cout<<"Worker Pin : "<<address->pin<<endl;
		}
};

int main()
{
	
	Address A1("Ahmedabad",300989,"Gujarat");
	Address A2("Surat",300978,"Gujarat");
	Employee E(12,"ABC","XYZ",&A1);
	Workers W(11,"CBA","ZXY",&A2);
	
	E.displayE();
	W.displayW();
	
	return 0;
}
















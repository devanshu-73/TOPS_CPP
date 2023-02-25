/*
	Polymorphism : 
	
	"Ability to react in Different way"

	Types Of Polymorphism : 
		
		1. Overloading :
			Method Overloading 
			Operator Overloading 
		
		2. Overridding : 
	

*/


#include<iostream>
using namespace std;

class Sample
{
	public:
		
	//method Overloading 
	void display()
	{
		cout<<"Default Method"<<endl;
	}
	
	void display(int a)
	{
		cout<<"Value 1: "<<a<<endl;
	}
	
	void display(int a, int b)
	{
		cout<<"Value 2 : "<<a<<endl;
		cout<<"Value 3 : "<<b<<endl;
	}
	
	void display(int a, int b, int c)
	{
		cout<<"Value 4 : "<<a<<endl;
		cout<<"Value 5 : "<<b<<endl;
		cout<<"Value 6 : "<<c<<endl;
	}
};

int main()
{	
	Sample obj;
	obj.display();
	obj.display(23);
	obj.display(23,4);
	obj.display(2,3,4);
	
	return 0;
}









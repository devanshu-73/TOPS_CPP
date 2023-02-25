/*
	Polymorphism : 
	
	"Ability to react in Different way"

	Types Of Polymorphism : 
		
		1. Overloading :
			Method Overloading 
			Operator Overloading
			
			Rule to overload operator : 
			>>Operators which can not be overload 
				:: : scope resolution operator
				?: : ternary operator 
				sizeof() : sizeof operator 
				. : membership operator 
			 Syntax : 
			 
			 	return_type operator op_sign(class_name exp_obj)
			 	{
			 		//logic
				 }
		
		2. Overridding : 
	

*/


#include<iostream>
using namespace std;

class Parent
{
	
	public:
	int a;
	
	Parent(int n)
	{
		a=n;
	}
	
	void operator +(Parent obj)
	{
		cout<<"Addition of Objects : "<<a+obj.a;
	}
		
};

int main()
{	
	Parent o1(12);
	Parent o2(5);
	
	o1+o2;
	
	return 0;
}








/*

	Abstraction : 
	
	"Hidding the irrelevant data from the end user "
	
	-->pure virtual function 
	
	virtual void display()=0;

*/
#include<iostream>
using namespace std;

class A
{
	public : 
	
	virtual void display()=0;
};

class B: public A
{
	public : 
	
	void display()
	{
		cout<<"You are in Class B"<<endl;
	}
};

class C: public A
{
	public : 
	
	void display()
	{
		cout<<"You are in Class C"<<endl;
	}
};

int main(){
	
	B obj1;
	C obj2;
	
	obj1.display();
	obj2.display();
	
	return 0;
}














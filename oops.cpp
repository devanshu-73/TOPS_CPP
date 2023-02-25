#include<iostream>
using namespace std;

class A
{
	public:
	int a;
	
	A()
	{
		cout<<"Constructor Call"<<endl;
	}
	
	A(int p)
	{
		a=p;
	}
	
	//Destructot 
	~A()
	{
		cout<<endl<<"Destructor Call"<<endl;
	}
	
	void display()
	{
		cout<<"Num : "<<a;
		}	
};

int main()
{
	A obj;
	A obj1(23);
	
	obj1.display();
	
	return 0;
}

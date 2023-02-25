//How to pass an object to a function

#include<iostream>
using namespace std;

class Parent
{
	
	public:
	string a;
	
	Parent(string n)
	{
		a=n;
	}
	
	void cat(Parent obj)
	{
		cout<<a<<" "<<obj.a;
	}
		
};

int main()
{	
	Parent o1("Hello");
	Parent o2("World");
	
	o1.cat(o2);
	
	return 0;
}









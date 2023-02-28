//How to return an object from a function

#include<iostream>
using namespace std;

class Parent
{
	
	public:
	int num1,num2;
	
	Parent display()
	{
		Parent obj;
		obj.num1=90;
		obj.num2=78;
		cout<<"Marks 1 : "<<obj.num1<<endl;
		cout<<"Marks 2 : "<<obj.num2;
	
		return obj;
	}
};



int main()
{	
	Parent o1,o2;
	
	o1=o2.display();
	
	return 0;
}









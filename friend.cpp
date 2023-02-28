//Friend Funciton :

#include<iostream>
using namespace std;

class Sample
{
	int a; //private member
	
	friend void display(Sample &obj); //friend function not any member of class
		
};

void display(Sample &obj)
{
	obj.a=23;
	cout<<"Private value : "<<obj.a;
}

int main()
{
	Sample o1;
	
	display(o1); //friend function calling 
}












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
	int add(int a, int b, int c=0)
	{
		return a+b+c;
	}
};

int main()
{	

	Sample obj;
	
	cout<<"Addition of two : "<<obj.add(12,2)<<endl;
	cout<<"Addition of three : "<<obj.add(12,2,87)<<endl;

	return 0;
}









//Inheritance : Hybride

#include<iostream>
using namespace std;

class A{
	public:
		
		void displayA(){
			cout<<"Class A"<<endl;
		}
};

class B: public A
{
	public :
		void displayB()
		{
			cout<<"Class B"<<endl;
		}
};

class C: public A
{
	public :
		void displayC()
		{
			cout<<"Class C"<<endl;
		}
};

class D: public B, public C
{
	public :
		void displayD()
		{
			cout<<"Class D"<<endl;
		}
};


int main()
{
	
	D obj;
	
	obj.C::displayA(); //unambiguous
	obj.displayB();
	obj.displayC();
	obj.displayD();

	return 0;
}














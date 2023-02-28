//Templates : 
/*

	"Templates is very simple yet powerful concept in c++"
	
	Types Of templates:
	
	1. class Template
	2. Function Template 

*/


//class Template : 

#include<iostream>
using namespace std;

//declaration of template variable 
template <typename T>

class A{
	
	public:
		
		T a,b;
};

int main()
{
	cout<<"\n\n---------For int----------\n\n";
	A <int>obj;
	cout<<"Enter Value A : ";
	cin>>obj.a;

	cout<<"Enter Value B : ";
	cin>>obj.b;
	
	cout<<"A int = "<<obj.a<<endl;
	cout<<"B int = "<<obj.b<<endl;
	
	cout<<"\n\n---------For Char----------\n\n";
	A <char>obj1;
	cout<<"Enter Value A : ";
	cin>>obj1.a;

	cout<<"Enter Value B : ";
	cin>>obj1.b;
	
	cout<<"A int = "<<obj1.a<<endl;
	cout<<"B int = "<<obj1.b<<endl;
		
	return 0;
}















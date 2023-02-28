#include<iostream>
using namespace std;

class A
{
	public:
	int a;
	
	int input(int a)
	{
		this->a=a;
		return a;
	}
};

int main()
{
	A obj;
	cout<<"Value = "<<obj.input(23);
	
	return 0;
}

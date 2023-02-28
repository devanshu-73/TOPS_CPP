#include<iostream>
//#include<string.h>
using namespace std;

class A
{
	public :
	string s1;
	A(string str1)		
	{
		s1 = str1;
	}
	void cat(A o1)
	{
		cout<<s1<<" "<<o1.s1;
	}
};
int main()
{
	A o1("Hello ");
	A o2("World");
	
	o1.cat(o2);
}

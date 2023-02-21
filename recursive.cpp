//task without recursion find fact
#include<iostream>
using namespace std;

int fact(int num)
{
	if (num<=0)
	{
		return 1;
	}
	else
	{
		return num*fact(num-1);
	}
}
int main()
{
	int num;
	
	cout<<"Enter num :";
	cin>>num;
	
	cout<<"Factorial : "<<fact(num);
	return 0;
}

//class & Objects: 

#include<iostream>
using namespace std;

class Sample
{
	public:
	
	int val;
		
	//class method <<setter() : to set the data
	void input(int s)
	{
		val=s;
	}
	
	//class method <<getter() : to get the data
	void display() 
	{
		cout<<"value = "<<val;
	}
};

int main()
{
	Sample obj;
	int num;
	cout<<"Enter number : ";
	cin>>num;
	
	obj.input(num);
	obj.display();
	
	return 0;
}

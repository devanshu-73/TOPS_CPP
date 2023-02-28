#include<iostream>
using namespace std;

class Sample
{
	public :
		int a;
		
};

int main()
{
	Sample *ptr;
	Sample obj;
	
	ptr=&obj;
	ptr->a=90;
	
	cout<<"Value : "<<ptr->a;
	
	return 0;
}

//Access modifiers:
//	public : these are accessible throughout prog...
//	private : these r only acessible inside class in which they r defined...
//	protected : these r accessible to class in which they r definedd and also accessible to the child class.....
//				but ..  not outside of parent or child class...
#include<iostream>

using namespace std;

class A
{
	private :
		int a =34;
		
	protected :
		void display(string n)
		{
			cout<<"Parent Name : "<<n<<endl;
		}			
};
class B : public A
{
	public :
		void show(string n)
		{
			display("Father");//protected
			cout<<"child name : "<<n<<endl;
		}
};

int main()
{
	B obj;
	obj.show("son");
}

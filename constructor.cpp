/*constructor :
	constructor will automatically call when the obj of a class is created....
	- it will always in public mode...
	-cons.. name will same as class name..
	-it will never have any return type...
	
	types of constructor : 
	1). default constructor
	2). parameterized constructor
	3). copy constructor 
	
	destructor :
	will call automatically when the object of such class is destroyed....
	-always in public mode..
	-destructor name always same as class name....
	-represents with tilde(~) sign 

*/


//#include<iostream>
//using namespace std;
//class A
//{
//		public :
//		int p;
//		A()//default constructor...
//		{
//			cout<<"default const...."<<endl;	
//		}	
//		A(int num)
//		{
//			p = num;
//		}
//		void display()
//		{
//			cout<<"num : "<<p<<endl;
//		}
//		void add()
//		{
//			cout<<"addition : "<<p+10;
//		}
//};
//
//int main()
//{
//	A obj1;
//	A obj(56);
//	obj.display();
//	obj.add();
//}
#include<iostream>
using namespace std;
class A
{
		public :
		int p;	
		A(int a)
		{
			p = a;
			cout<<"value : "<<p<<endl;
		}
		A(A &obj)//copy constructor
		{
			cout<<"addition : "<<obj.p+10;
		}
};

int main()
{
	A obj1(56);
	A obj2(obj1);
}

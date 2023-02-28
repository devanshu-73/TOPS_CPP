//funciton Template : 

#include<iostream>
using namespace std;

//declaration of template variable 
template <typename T>
T add(T a, T b)
{
	return a+b;
}

int main()
{
	cout<<"Addition of int : "<<add<int>(12,2)<<endl;
	
	cout<<"Addition of float : "<<add<float>(12.2,34.2);
	
	return 0;
}

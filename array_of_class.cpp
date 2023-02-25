//class : Array Of class 

#include<iostream>
using namespace std;

class Student
{
	public:
	
	int marks[3],id;
	string name;
	
	void input()
	{
		cout<<"Enter name : ";
		cin>>name;
		
		cout<<"Enter Id : ";
		cin>>id;
		
		for(int i=0;i<3;i++)
		{
			cout<<"enter marks : ";
			cin>>marks[i];
		}
	}
	
	void display()
	{
		cout<<"Name = "<<name<<endl;
		cout<<"Id = "<<id<<endl;
		for(int i=0;i<3;i++)
		{
			cout<<"Marks of Subject "<<i+1<<" : "<<marks[i]<<endl;
		}
	}
};

int main()
{


	Student obj[3];
	
	cout<<"\n\n-------Input-------\n\n";
	for(int i=0;i<3;i++)
	{
		cout<<endl;
		obj[i].input();
	}
	
	cout<<"\n\n-------Result-------\n\n";
	for(int i=0;i<3;i++)
	{
		cout<<endl;
		obj[i].display();
	}

	return 0;
}

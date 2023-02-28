#include<iostream>
using namespace std;

class Vehicle
{
	public :
	
	string m_colour;
	string pur_date;
	Vehicle(string colour,string date)
	{
		m_colour = colour;
		pur_date = date;	
	}
};
class Twovehi
{
	public :
	string m_name;
	int m_price;	
	Vehicle *vehicle;
	Twovehi(string name,int price,Vehicle *vehicle)
	{
		m_name = name;
		m_price = price;
		this->vehicle = vehicle;
	}
	void displayT()
	{
		cout<<"\n";
		cout<<"Model Name : "<<m_name<<endl;
		cout<<"Model Price : "<<m_price<<endl;
		cout<<"Model Colour : "<<vehicle->m_colour<<endl;
		cout<<"Date : "<<vehicle->pur_date<<endl;
	}
};
class Fourvehi
{
	public :
	string m_name;
	int m_price;
	Vehicle *vehicle;
	Fourvehi(string name,int price,Vehicle *vehicle)
	{
		m_name = name;
		m_price = price;
		this->vehicle = vehicle;
	}
	void displayF()
	{
		cout<<"\n";
		cout<<"Model Name : "<<m_name<<endl;
		cout<<"Model Price : "<<m_price<<endl;
		cout<<"Model Colour : "<<vehicle->m_colour<<endl;
		cout<<"Date : "<<vehicle->pur_date<<endl;
	}
};
int main()
{
	Vehicle o1("RED","10-03-2021");
	Vehicle o2("White","04-03-2022");
	Twovehi obj1("A",50000,&o1);
	Fourvehi obj2("B",100000,&o2);
	
	obj1.displayT();
	obj2.displayF();
}

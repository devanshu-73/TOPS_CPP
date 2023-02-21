#include<iostream>
using namespace std;

int main()
{
	int a[6],temp,i,j;
	
	for(i=0;i<6;i++)
	{
		cout<<"Enter Number : ";
		cin>>a[i];
	}
	
	for(i=0;i<6;i++)
	{
		for(j=i+1;j<6;j++)
		{
			if(a[i]>a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for(i =0;i<6;i++)
	{
		cout<<a[i]<<endl;
	}
	return 0;
}

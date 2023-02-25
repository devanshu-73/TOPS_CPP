//Matrix Multiplication : 

#include<iostream>
using namespace std;


int main()
{
	int m1[2][2],m2[2][2],res[2][2];
	
	cout<<"\n\n-----------Matrix-1------------------\n\n";
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<"Enter element : ";
			cin>>m1[i][j];
		}
	}
	
	cout<<"\n\n-----------Matrix-2------------------\n\n";
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<"Enter element : ";
			cin>>m2[i][j];
		}
	}
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			res[i][j]=0;
			for(int k=0;k<2;k++)
			{
				res[i][j]+=m1[i][k]*m2[k][j];
			}
		}
	}
	
	cout<<"\n\n-----------Result Matrix------------------\n\n";
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<" "<<res[i][j];
		}
		cout<<endl;
	}
	
	return 0;
}

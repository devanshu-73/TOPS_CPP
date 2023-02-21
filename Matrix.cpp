#include<iostream>
using namespace std;
int main()
{
int a[3][3], b[3][3], c[3][3];
    cout<<"Matrix Multiplication ";
    cout<<"------- Enter Matrix : 1 -------"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>> a[i][j];
        }
    }
    // for(int i=0; i<4; i++)
    // {
    //     for(int j=0; j<4; j++)
    //     {
    //         printf("%d",a[i][j]);
    //     }
    //     printf("\n");
    // }

    cout<<"------- Enter Matrix : 2 -------"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>b[i][j];
        }
    }
    // for(int i=0; i<4; i++)
    // {
    //     for(int j=0; j<4; j++)
    //     {
    //         printf("%d",b[i][j]);
    //     }
    //     printf("\n");
    // }

    cout<<" Multiplication :"<<endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }
     cout<<" The Result is ....."<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<c[i][j];
        }
        cout<<endl;
    }
    return 0;
}

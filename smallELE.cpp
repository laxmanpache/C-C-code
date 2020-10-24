#include<iostream>
using namespace std;
int main()
{


    int m[3][3];
    int i,j,minm;
    cout<<"Enter matrix";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>m[i][j];
        }
        cout<<"\n";
    }

    cout<<" Given matrix \n";

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<m[i][j]<<" " ;
        }
        cout<<"\n";
    }
    minm=m[0][0];


    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(m[i][j]<minm)
                minm=m[i][j];
        }

    }


    cout<<"Minimum elsement of array is :"<<minm;
}

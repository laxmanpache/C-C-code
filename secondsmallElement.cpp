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
     int sm=m[0][1],temp;
    minm=m[0][0];
    if(minm>sm)
    {
        temp=minm;
        minm=sm;
        sm=temp;
    }



    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          if(m[i][j]<minm)
          {
              temp=minm;
              minm=m[i][j];
              sm=temp;
          }

        }

    }


    cout<<"second minimum element of array is :"<<sm;
}


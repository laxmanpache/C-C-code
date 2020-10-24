#include<iostream>
using namespace std;
int main()
{
    int r,c,i,j;
    cin>>r;
    cin>>c;


    int m1[r][c],m2[r][c], mul[r][c];
    for(i=0;i<r;i++)
    {
        for( j=0;j<c;j++)
        {
            cin>>m1[i][j];
        }
    }
    for(i=0;i<r;i++)
    {
        for( j=0;j<c;j++)
        {
            cin>>m1[i][j];
        }
    }




    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            mul[i][j]=0;
            for(int k=0;i<c;k++)
            {
                 mul[i][j]+=m1[i][k]*m2[k][j];

            }

        }
    }
  
  cout<<"Matrix multiplication is given";
      for(i=0;i<r;i++)
    { 
        for( j=0;j<c;j++)
        {
            cout<<mul[i][j];
        }
		cout<<"\n";
    }




}


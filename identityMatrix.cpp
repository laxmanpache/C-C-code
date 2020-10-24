#include<iostream>
using namespace std;

int main(){

int n,i,j;
cout<<"Enter row and cloumn same calue";
cin>>n;
int m[n][n];

for(i=0;i<n;i++)
{
    for( j=0;j<n;j++)
    {
        cin>>m[i][j];

    }
}

int c=0;

for(i=0;i<n;i++)
{
    for( j=0;j<n;j++)
    {
        if(i==j && m[i][j]!=1)
        {

                c++;
                break;


        }
        else if(i!=j && m[i][j]!=0)
        {
            c++;
            break;
        }


    }
}

if(c==0)
    cout<<"yes";
else
  cout<<"No";


}

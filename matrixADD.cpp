#include<iostream>
using namespace std;
int inputMatrix()
{   int m[3][3];
    int i,j;
    for(i=0;i<3;i++)
         {
             for(j=0;j<3;j++)
             {
                 cin>>m[i][j];
             }
             cout<<"\n";
         }
    return m[3][3];
}

int main()
{

    int n1[3][3],n2[3][3],i,j;



      cout<<"Enter first matrix";
      n1[3][3]= inputMatrix();

    for(i=0;i<3;i++)
         {
             for(j=0;j<3;j++)
             {
                 cout<<n1[i][j]<<" ";
             }
             cout<<"\n";
         }

}

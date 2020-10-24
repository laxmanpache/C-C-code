#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter number ";
    cin>>num;
    int sum;
   /* for(int i=1;i<=num;i++)
    {
       sum+=i;
    }*/
    sum= num*(num+1)/2;

    cout<<"Addition of natural number :"<<sum;
}

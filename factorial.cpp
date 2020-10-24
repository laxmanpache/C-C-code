#include<iostream>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int fact=1;
    for(int i=n;i>0;i--)
    {
        fact*=i;
    }

    cout<<"factorial of number"<<fact;
}

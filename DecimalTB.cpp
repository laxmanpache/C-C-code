#include<iostream>
using namespace std;
int main()
{

    int n,rem,b=0,i=1;
    cin>>n;
    while(n>0)
    {
        rem=n%2;
        b=b+(rem*i);
        n=n/2;
        i=i*10;


    }
    cout<<b;
}

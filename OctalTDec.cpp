#include<iostream>
#include<math.h>
using namespace std;
int main()
{

    int n,i=0,rem,d=0;
    cin>>n;
    while(n>0)
    {
        rem=n%10;
        d=d+(rem*pow(8,i));
        n=n/10;
        i++;
    }
    cout<<d;
}

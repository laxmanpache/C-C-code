#include<iostream>
using namespace std;
int main()
{

    long n,num=0,rem;
    cin>>n;
    while(n!=0)
    {
        rem=n%10;
        if(rem==0)
            rem=1;
        n=n/10;
        num=num*10+rem;
    }

    cout<<num;

}

#include<iostream>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int  rem,num=0;

    while(n>0)
    {

        rem=n%10;

        num=(num*10)+rem;
        n=n/10;
        //i=i*10;


    }
    cout<<num;
}

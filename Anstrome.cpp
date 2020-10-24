#include<iostream>
#include<math.h>
using namespace std;
int main()
{

    int n,st,rem,s=0;
    cin>>n;
    st=n;
    while(n>0)
    {
        rem=n%10;
        s=s+rem*rem*rem;
        n=n/10;
    }

    if(st==s)
        cout<<"Number is armstrong ";
    else
        cout<<"number is not armstrong";
}

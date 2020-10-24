#include<iostream>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int s=n,r,st=0;
    while(n>0)
    {
        r=n%10;
        int f=1;
        for(int i=r;i>0;i--)
        {
            f=f*i;
        }
        st=st+f;
        n=n/10;
    }
    if(s==st)
       cout<<"Given number is strong number";
    else
        cout<<"given number is not strong number";

}

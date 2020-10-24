#include<iostream>
using namespace std;
int main()
{


    int n,n1;
    cin>>n1;
    n=n1;
    int rem,num=0;
    while(n>0)
    {

       rem=n%10;

        num=(num*10)+rem;
        n=n/10;

    }

   // cout<<num;
    if(n1==num)
        cout<<"Given number is palindrome";
    else
        cout<<"Given number is not palindrome";

}

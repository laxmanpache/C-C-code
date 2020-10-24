#include<iostream>
using namespace std;
int main()
{

    int n;

    cin>>n;
    int div=0;
    for(int i=2;i<=n/2;i++)
    {

        if(n%i==0)
            {div++;
              break;
            }

    }

    if(div==0)
        cout<<"Number is prime";
    else
        cout<<"Number is not prime";
}

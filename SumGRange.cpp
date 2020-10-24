#include<iostream>
using namespace std;

int main()
{

    int LL,UL;
    cout<<"Enter lower limit :";
    cin>>LL;
    cout<<"\n Enter Upper limit : ";
    cin>>UL;
    int sum=0;
    for(int i=LL;i<=UL;i++)
    {
        sum=sum+i;
    }
    cout<<"Sum of number in given  range : "<<sum;

}

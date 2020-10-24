#include<iostream>
using namespace std;
int main()
{

    int a[50],k[50],j,i,n,c;
    cout<<"how many element you want to enter";
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
        k[i]=-1;
    }

    for(i=0;i<n;i++)
    {

        c=1;
        int ele=a[i];
        for(j=i+1;j<n;j++)
        {
            if(ele==a[j])
            {
                k[j]=0;
                c++;
            }


        }
        if(k[i]!=0)
        {
            k[i]=c;
        }

    }

    cout<<"Frequency of all element is :";

    for(i=0;i<n;i++)
    {
        if(k[i]!=0)
        {
            cout<<"\nfrequency of"<<a[i] <<" is "<<k[i] <<"times\n";
        }
    }
}

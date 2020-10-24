#include<iostream>
using namespace std;

int main()
{

    int i,a[50],j;
    int temp,n;
    cout<<"How many element you want to enter";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(i=0;i<n/2;i++)
    {
        for(j=0;j<n/2;j++)
        {
           if(a[i]<a[j])
           {
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
           }
        }

    }
     for(i=n/2;i<n;i++)
    {
        for(j=n/2;j<n;j++)
        {
           if(a[i]>a[j])
           {
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
           }
        }
    }

    cout<<"\n given o/p is\n";
        for(i=0;i<n;i++)
        {
            cout<<a[i];
        }


}

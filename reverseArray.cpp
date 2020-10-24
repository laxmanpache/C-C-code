#include<iostream>
using namespace std;
int main()
{

    int i,a[50];
    cout<<"How many element you want to enter in array";
    int n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<"Given array is : ";
     for(i=0;i<n;i++)
    {
        cout<<a[i] <<" ";
    }
   cout<<"\n";
    cout<<"reverse array :";

       for(i=n-1;i>=0;i--)
    {
        cout<<a[i]<<" ";
    }

}

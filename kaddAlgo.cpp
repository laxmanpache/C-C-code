#include<iostream>
using namespace std;
int main()
{


    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
     int s_s_far=INT_MIN,End=0;
    for(i=0;i<n;i++)
    {
         End=End+a[i];
         if(s_s_far<End)
            s_s_far=End;
         if(End<0)
           End=0;


    }


    cout<<s_s_far;
}

#include<iostream>
using namespace std;
int main()
{


    int s;
    cin>>s;
    int a[s],i;
    for(i=0;i<s;i++)
        cin>>a[i];

        // Kddeent algorithum
    int End=0,maxsofar=INT_MIN;
    for(i=0;i<s;i++)

    {
         End=End+a[i];

        if(maxsofar<End)
            maxsofar=End;

        if(End<0)
            End=0;
    }
    cout<<maxsofar;
}

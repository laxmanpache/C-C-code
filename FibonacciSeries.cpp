#include<iostream>
using namespace std;
int main()
{

    int i,first=0,second=1,next,num;
    cin>>num;
    for(i=0;i<num;i++)
    {

        if(i<=1)
            next=i;
        else
        {
             next=first+second;
             first=second;
             second=next;

        }
        cout<<next<<" ";
    }
}

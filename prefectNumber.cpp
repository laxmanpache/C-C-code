#include<iostream>
using namespace std;
int main()
{

    int i,num,rem,s=0,st;
    cin>>num;
    st=num;



        for(i=1;i<num;i++)
        {
            if(num%i==0)
                s=s+i;
        }


        if(st==s)
            cout<<"given number is prefect number";


        else
            cout<<"number is not perfect";

}

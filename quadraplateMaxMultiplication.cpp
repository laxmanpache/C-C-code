#include<iostream>
using namespace std;
int max(int a,int b)
 {
     if(a>b)
        return a;
     return b;
 }

 int fmp(int a[],int n)
     {

         int mp=0;
         int pro=1;
         for(int i=0;i<=n-4;i++)
            for(int j=i+1;j<=n-3;j++)
              for(int k=j+1;k<=n-2;k++)
               for(int l=k+1;l<=n-1;l++)
                    {
                       pro=a[i]*a[j]*a[k]*a[l];
                       mp=max(mp,pro);
                       pro=1;
                    }


                    return mp;
     }

int main()
{

    int a[30],n;
    cin>>n;
    for(int i=0;i<n;i++)
    {

        cin>>a[i];
    }

     int m=fmp(a,n);
     cout<<m;
}

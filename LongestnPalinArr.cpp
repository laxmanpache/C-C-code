#include<iostream>
using namespace std;
 int ispalendrome(int num)
 {
     int rev=0,rem,n=num;
     while(num!=0)
     {
         rem=num%10;
         rev=(rev*10)+rem;
         num=num/10;
     }
     if(rev=n)
        return 1;
     else
        return 0;
 }
 int sorte(int a[],int n)
 {

     for(int i=0;i<n;i++)
     {
         for(int j=0;j<n;j++)
         {
            if(a[i]<a[j])
            {
                int temp;
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
         }
     }


   for(int i=n-1;i>=0;i--)
   {

       if(ispalendrome(a[i]))
          return a[i];

   }
   return -1;
 }
int main()
{

    int i,a[50],j,n;
    cout<<"How many element you want to enter ";
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    j=sorte(a,n);

    cout<<"number is :"<<j;

}

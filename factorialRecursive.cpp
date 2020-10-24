#include<iostream>
using namespace std;

int fact(int num)
 {
     if(num>=1)
        return num*(fact(num-1));
     else
        return 1;
 }

 int main()
 {
     int n;
     cin>>n;
     int f=fact(n);
     cout<<f;
 }

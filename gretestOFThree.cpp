#include<iostream>
using namespace std;
int main()
{

    int n1,n2,n3;
    cout<<"Enter three number : ";
    cin>>n1;
    cin>>n2;
    cin>>n3;

    ((n1>n2)&&(n1>n3))?cout<<"n1 is Greater":(((n1<n2)&&(n2>n3))?cout<<"n2 is Greater":cout<<"n3 is greater");
}

#include<iostream >
using namespace std;

int main()
{

    int n1,n2 ,i;
    cin>>n1>>n2;
    int a=(n1>n2)?n1:n2;

    for( i=a;i<=n1*n2;i+=a)
    {
        if(i%n1==0 && i%n2==0)
        {


            break;
        }
    }
    cout<<"LCM :"<<i;
}

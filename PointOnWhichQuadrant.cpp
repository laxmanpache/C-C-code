#include<iostream>
using namespace std;
int main()
{

    int x,y;
    cin>>x>>y;
    if(x==0 && y!=0)
        cout<<"point lies on y axis";
    else if(y==0 && x!=0)
        cout<<"point lies on X axis";
    else if(x>0 && y>0)
        cout<<"point lies on first quadrant";
    else if(x<0 && y>0)
        cout<<"Point lies on second quadrant";
    else if(x<0 && y<0)
        cout<<"point lies on third quadrant";
    else if(x>0 && y<0)
        cout<<"point lies on fourth quadrant";
    else
        cout<<"point on origin";
}

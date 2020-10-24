#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter Year : ";
    cin>>year;

    if((year%4==0)&&(year%100!=0)||(year%400==0))
        cout<<"Above year is leaf year \n";
    else
        cout<<"Given year is not leaf year";

}

#include<iostream>
#include<cstdio>

using namespace std;
int main()
{

    char str[50];
    cout<<"Enter string which you want to enter :";
    gets(str);
    int i,len=0;
    for(i=0;str[i]!='\0';i++)
    {
        len++;
    }
    cout<<len;
}

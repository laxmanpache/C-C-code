#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
int main()

{

    char st[200],sn[100];
    gets(st);
    int i=0,k=0;
    int l=strlen(st);
   while(st[i]!='\0')
   {
       if(st[i]!=' ')
        sn[k++]=st[i];

    i++;
   }
   sn[k]='\0';

   cout<<sn;
}

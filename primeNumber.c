#include<stdio.h>
void main()
{

    int s=2,e=50,j;
    for(int i=s;i<=e;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
                break;
        }
        if(i==j)
        {

            printf("%d",i);
        }
    }
}

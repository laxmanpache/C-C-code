#include<stdio.h>

#define MAX 50

int main()
{

    int a[MAX],num[MAX];
    int s,i,j,c;
    printf("Enter length of array: ");
    scanf("%d",&s);
    printf("Enter element of array : ");
    for(i=0;i<s;i++)
    {

        scanf("%d",&a[i]);
        num[i]=-1;

    }
    for(i=0;i<s;i++)
    {

        c=1;
        for(j=i+1;j<s;j++)
        {
            if(a[i]==a[j])
            {

                c++;
                num[j]=0;
            }
        }
        if(num[i]!=0)
        {
            num[i]=c;
        }
    }

    printf("unique element of array : ");
    for(i=0;i<s;i++)
    {

        if(num[i]>1)
            printf("%d",a[i]);
    }
}

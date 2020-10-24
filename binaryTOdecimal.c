#include<stdio.h>
#include<math.h>
int BTD(long num);
int DTO(int j);
int main()
{

    printf("Enter binary number\n");
    long num;
    scanf("%d",&num);

    int j=BTD(num);
    printf("%d",j);
    int k=DTO(j);
    printf("\nOCTAL :%d",k);
}
int BTD(long  num)
{   int i=0, dec=0,rem;
    while(num!=0)
    {

        rem=num%10;
        num=num/10;

        dec=dec+(rem*pow(2,i));
        i++;
    }
    return dec;
}
int DTO(int j)
{

    int i=1,rem,oct=0;

    while(j!=0)
    {

        rem=j%8;
        j=j/8;
        oct=oct+(rem*i);
        i*=10;
    }

    return oct;
}

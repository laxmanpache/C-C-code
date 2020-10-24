#include<stdio.h>
#define Max 30
int main()
{
    int arr1[Max],i,j,k=0;
    printf("Enter how many element you want to enter in array\n");
    int size;
    scanf("%d",&size);
    int arr2[size];
    printf("\n Enter array element\n");
    for(i=0;i<size;i++)
    {

        scanf("%d",&arr1[i]);
        arr2[i]=-1;

    }

    printf(" Given array is :");
    for(i=0;i<size;i++)
    {

        printf("%d  ",arr1[i]);
    }



 printf("\nNon repeated element in array is : ");
    for(i=0;i<size;i++)
    {
        //int key=arr1[i];
      int c=0;
        for(j=0;j<size;j++)
        {
            if(arr1[i]==arr1[j])
            {

                c++;

            }

        }

        if(c==1)
        {
            printf("%d  ",arr1[i]);
        }

    }





}

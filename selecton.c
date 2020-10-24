#include<stdio.h>

int selections(int arr[],int length);
int main()
{
    int arr[]={2,6,8,10,4};
    int *arr1=selections(arr,5);
     for(int i=0;i<5;i++)
     {

         printf("%d",arr1[i]);
     }

}

int selections(int arr[],int length)
{

    int i,j,min_i,temp;
    for(i=0;i<length-1;i++)
    {

        min_i=i;
        for(j=i+1;j<length;j++)
        {

            if(arr[j]>arr[min_i])
                min_i=j;
        }

        temp=arr[min_i];
        arr[min_i]=arr[i];
        arr[i]=temp;
    }
     return arr;
}

#include<stdio.h>
int insertion(int arr[],int length);
int main()
{

    int arr[]={2,5,7,1,9,4};
    int *arr1=insertion(arr,6);
    for(int i=0;i<6;i++)
    {
        printf("%d",arr1[i]);
    }

}

int insertion(int arr[],int length)
{
     int j,key;


    for(int i=1;i<length;i++)
    {
        key=arr[i];
        j=i-1;

        while(j>=0 && arr[j]>key)
        {

            arr[j+1]=arr[j];
            j--;

        }

        arr[j+1]=key;

    }

    return arr;
}




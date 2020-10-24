#include<stdio.h>


int main()
{
  int arr[10];
  printf("Enter size of array : ");
  int size,i,count=0;
  scanf("%d",&
        size);
  printf("Enter array element i.e 0,1:");
  for(i=0;i<size;i++)
  {

      scanf("%d",&arr[i]);
  }

  for(i=0;i<size;i++)
  {
      if(arr[i]==0)
        count++;
  }
  for(i=0;i<count;i++)
  {
      printf("0 ");
  }
  for(i=count;i<size;i++)
  {

      printf("1 ");
  }
}

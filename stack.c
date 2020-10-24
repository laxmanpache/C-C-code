#include<stdio.h>
#include<conio.h>

# define MAX 5
int st[5];
int top=-1;
void push();
void pop();
void show();


void main()
{
   int ch;
     do{

     printf("enter Your choice :\n");
     printf("1 . push  2.pop  3.show  4.exit\n");
     scanf("%d",&ch);

     switch(ch)
     {

         case 1: push();
         break;

         case 2: pop();
         break;
         case 3: show();
         break;


     }


  }while(ch!=4);


}


void push()
 {
     int item;

     if(top==MAX-1)
     {

         printf("Stack is full\n");
     }
     else{
        printf("Enter element you want to push\n");
        scanf("%d",&item);
        top=top+1;
        st[top]=item;
     }
 }

   void pop()
   {
           int item;
       if(top==-1)
       {
           printf("Stack is empty\n");
       }
       else{
            item=st[top];

            top=top-1;
            printf("Deleted item is %d ",item);
       }
   }

   void show()
   {

       if(top==-1)
       {

           printf("Stack is empty\n");

       }
       else
       {

           int i;
           for(i=top;i>=0;i--)
           {
               printf("%d\t",st[i]);
           }
       }
   }



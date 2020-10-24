#include<stdio.h>
#include<stdlib.h>


typedef struct node
{

    int data;
    struct node *next;
}node;
 node* createlinklist(int n);
 void display(node*head);
void main()
{

    int n;
    node *head=NULL;
    printf("Enter number of node you want to insert\n");
    scanf("%d",&n);
    head=createlinklist(n);
    display(head);
}

node* createlinklist(int n)
{

    int i=0;
    node *temp=NULL;
    node * head=NULL;
    node *p=NULL;

    for(i=0;i<n;i++)
    {

        temp=(node *)malloc(sizeof(node));
        printf("Enter data for node number :%d ",i+1);
        scanf("%d",&(temp->data));
        temp->next=NULL;
        if(head==NULL)
        {

            head=temp;
        }
        else
        {
            p=head;
            while(p->next!=NULL)
            {

                p=p->next;
            }
            p->next=temp;

        }
    }
    return head;
}

void display(node *head)
{

    node *p=head;
    while(p!=NULL)
    {
        printf("%d -> ",p->data);
        p=p->next;
    }
}

#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int info;
    struct node* next;
}list;
void insert(list **head,int a)
{
    list* temp=(list*)malloc(sizeof(list));
    temp->info=a;
    temp->next=NULL;
    if(*head==NULL)
        *head=temp;
    else{
    list *t=*head;
    while(t->next!=NULL)
    {
        t=t->next;
    }
    t->next=temp;
    }
}
int count(list* hd)
{
    int c=0;
    while(hd!=NULL)
    {
        c++;
        hd=hd->next;
    }
    return(c);
}

int main()
{
    list *head=NULL;
    int no,total,i=1;
    char ch;
    do
    {
        printf("Enter the element you want to insert :");
        scanf("%d",&no);
        insert(&head,no);
        fflush(stdin);
        printf("Do you want to insert more Y/N");
        scanf("%c",&ch);
    }while(ch=='y'||ch=='Y');
    printf("\nMid element is :");
    total=count(head);
    list* temp=head;
    while(i<total/2)
    {
        temp=temp->next;
        i++;
    }
    if(total%2==0)
    {
        printf("%d ",temp->info);
        temp=temp->next;
        printf("%d",temp->info);
    }
    else{temp=temp->next;printf("%d",temp->info);}
}

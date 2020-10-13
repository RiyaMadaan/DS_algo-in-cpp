#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int info;
    struct node *next;
}node;
void insert(node **l,int n)
{
    node*p=(node*)malloc(sizeof(node));
    p->info=n;
    p->next=NULL;
    if(*l==NULL)(*l)=p;
    else {
        (*l)->next=p;
        (*l)=p;
    }
}
void reverse(node **f,node **l)
{
    node *p=f,*q=f;

}
int main()
{
    node *fe=NULL,*le=NULL;
    int n;char ch;
    do
    {
        printf("Enter the element to enter :");
        scanf("%d",&n);
        insert(&le,n);
        if(fe==NULL)fe=le;
        printf("DO YOU WNAT TO CONTINUE ...");
        fflush(stdin);
        scanf("%c",&ch);
    }while(ch=='Y'||ch=='y');
    reverse(&fe,&le);
}

#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *next;
};
typedef struct node node;
void insert(node **l,int num)
{
    node *p=(node*)malloc(sizeof(node));
    p->info=num;
    p->next=NULL;
    if(*l==NULL)
        *l=p;
    else{
        (*l)->next=p;
        *l=p;
    }
}
void del_alt(node *f,node **l)
{
    node *t=f;
    node *p;
    while(t!=NULL&&t->next!=NULL)
    {
        p=t->next;
        if(t->next->next==NULL)*l=t;
        t->next=t->next->next;
        t=t->next;
    }
}
void display(node *f)
{
    while(f!=NULL)
    {
        printf("%d",f->info);
        f=f->next;
    }
}
int main()
{
    node *fe,*le;
    fe=NULL;le=NULL;
    char ch;int n;
    do
    {
        printf("Enter element:");
        scanf("%d",&n);
        insert(&le,n);
        if(fe==NULL)fe=le;
        printf("DO YOU WANT TO CONTINUE:");
        fflush(stdin);
        scanf("%c",&ch);
    }while(ch=='Y'||ch=='y');
    del_alt(fe,&le);
    display(fe);
}

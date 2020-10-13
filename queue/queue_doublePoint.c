#include<stdio.h>
typedef struct node
{
    int info;
    struct node *next;
};
void insert(node **fi,node **ri)
{
    node *p=(node*)malloc(sizeof(node));
    scanf("%d",&(p->info));
    if(*fi==NULL)
    {
        fi=p;ri=p;
    }
    else{
        ri->next=p;
        ri=p;
    }
}

int main()
{
    node *f=NULL,*r=NULL;
        char ch;int n;
    do
    {
        printf("Enter 1: to insert\n2: to serve\n3: to display\n");
        scanf("%d",&n);
        switch(n)
        {
        case 1:
            insert(&f,&r);
            break;
        case 2:
            if(f==-1)
                {printf("Underflow\n");
                }
           /* else
                f=serve(queue,f,r);
                if(f==-1)r=-1;
                break;*/
        case 3:
            if(f==NULL)
            {
                printf("No element to display\n");
            }
            else
            {
                display(f,r);
            }
        }printf("\nDo you wish to continue: Y/N");
        fflush(stdin);
            scanf("%c",&ch);

    }while(ch=='Y'||ch=='y');
}

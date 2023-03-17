#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node* next;
};

void printing(struct node * s)
{
    while(s!=NULL)
    {
        printf("%d\n",s->data);
        s = s->next;
    }
}

int main()
{
    
    struct node *a = (struct node *)malloc(sizeof(struct node));
    struct node *b = (struct node *)malloc(sizeof(struct node));
    struct node *c = (struct node *)malloc(sizeof(struct node));
    a->data  =10;
    b->data = 20;
     c->data = 30;
    a->next = b;
    b->next = c;
    c->next = NULL;

    printing(a);


    
}
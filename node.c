#include<stdio.h>
#include<stdlib.h>
typedef struct LinkedList{
    int val;
    struct LinkedList *next;
}node;
void ins_b(node **head,int a)
{
    node *new;
    new= (node *) malloc (sizeof(node));
    new->val=a;
      new->next=*head;
        *head=new;
}
void ins_e(node **head,int a)
{
    node *new,*p;
    new= (node *) malloc(sizeof(node));
    new->val=a;
    new->next=NULL;
     if (*head == NULL)
        *head = new;
    else
    {
        p = *head;
        while (p->next != NULL)
        {
            p = p->next;
        }
        new->next=NULL;
        p->next = new; // Add the new node to the end of the list
    }
}
void display(node * head)
{
    node *p;
    if (head==NULL) printf("\n the list is empty \n");
    p=head;
    while(p!=NULL)
    {
     printf("%d\n",p->val);
     p=p->next;
    }

}
void pos_i(node ** head, int pos, int a)
{
        node *new;
    node *q,*p;
    int i;
    new= (node *) malloc (sizeof(node));
    new->val=a;
    if(pos==1)
    {
    new->next=*head;
    *head=new;
    }
    else
    {
    i=1;
    p=*head;
    q=NULL;
        while(i<pos && p != NULL)
        {
            i++;
            q=p;
            p=p->next;
        }

    if(p==NULL)
        printf("the position is greater than the size of the list");
   else
   {
   new->next=p;
   q->next=new;
   }
        }
}
void add_eba(node **head,int a,int x)
{
    node *p,*q;
    node *new;
    new= (node *) malloc (sizeof(node));
    new->val=a;
    if((*head)->val==x)
    {
        new->next=*head;
        *head=new;
    }
    else
    {
        p=*head;
        q=NULL;
        while(p!=NULL && p->val != x)
        {
            q=p;
            p=p->next;
        }
        new->next=p;
        q->next=new;
    }
}
void add_eaa(node **head,int a,int x)
{
    node *p;
    node *new;
    new= (node *) malloc (sizeof(node));
    new->val=a;
    if((*head)->val==x)
    {
        new->next=*head;
        *head=new;
    }
    else
    {
        p=*head;
        while(p!=NULL && p->val != x)
        {
            p=p->next;
        }
        new->next=p;
    }
}
void del_b(node **head)
{
    node *p;
    if(head == NULL)
        return NULL;
    p=*head;
    *head=(*head)->next;
    free(p);
}
void del_e(node **head)
{
    node *p,*q;
    p = *head;
    if(head == NULL)
        return NULL;
    while (p->next != NULL)
    {
            q=p;
            p = p->next;
    }
    q->next=NULL;
    free(p);      

}
void sum_occ(node *head,int x)
{
    node *p;
    p=head;
    int c=0;
    if(head=NULL)
    {
        printf("list is empty\n");
        return NULL;
    }
    else
    {
    while(p!=NULL)
    {
        if(p->val==x)
            c=c+1;
        p=p->next;
    }
    }
    printf("number of occurrences is %d\n",c);
}
int main()
{
  node *head = NULL;
}
/*  
    Copy this into the main function to try
    ins_b(&head,5);
    ins_b(&head,4);
    ins_b(&head,3);
    ins_b(&head,2);
    ins_b(&head,1);
    ins_b(&head,0);
    ins_e(&head,6);
    ins_e(&head,7);
    ins_e(&head,8);
    ins_e(&head,8);
    ins_e(&head,8);
    ins_e(&head,8);
    ins_e(&head,8);
    ins_e(&head,8);
    ins_e(&head,9);
    ins_e(&head,10);
    ins_e(&head,11);
    ins_e(&head,12);
    pos_i(&head,2,99);
    pos_i(&head,5,66);
    pos_i(&head,10,33);
    ins_e(&head,110);
    add_eaa(&head,120,4);
    add_eaa(&head,1276,4);
    add_eba(&head,760,9);
    add_eba(&head,260,9);
    ins_e(&head,99999999);
    del_b(&head);
    del_e(&head);
    display(head);
    sum_occ(head,8);*/

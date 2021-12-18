#include<stdlib.h>
#include<stdio.h>

typedef struct node
{
    int data;
    struct node *next;
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE First, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->next = NULL;
    newn->data = no;
    
    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        newn->next = *First;
        *First = newn;
    }
}

void Display(PNODE First)
{
        while(First!= NULL)
        {
            printf("|%d|->",First->data);
            First = First->next;
        }
    printf("\n");
}

void Reverse(PPNODE First)
{
    PNODE Pudhacha = NULL, Magacha = NULL, Current = *First;
    
    while(Current != NULL)
    {
        Pudhacha = Current -> next;
        Current -> next = Magacha;
        Magacha = Current;
        Current = Pudhacha;
    }
    *First = Magacha;
}

int main()
{
    PNODE Head = NULL;

    InsertFirst(&Head,40);
    InsertFirst(&Head,30);
    InsertFirst(&Head,20);
    InsertFirst(&Head,10);
    
    Display(Head);

    Reverse(&Head);
    
    printf("\nLinked list after reverse\n");
    
    Display(Head);
    
    return 0;
}

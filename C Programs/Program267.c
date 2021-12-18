#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

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

bool CheckLoop(PNODE First)
{
    PNODE Fast = First;
    PNODE Slow = First;
    
    bool flag = false;
    
    while((Fast != NULL) && (Fast ->next != NULL) && (Slow != NULL))
    {
        Fast = Fast -> next -> next;
        Slow = Slow -> next;
        
        if(Fast == Slow)
        {
            flag = true;
            break;
        }
    }
    return flag;
}

int main()
{
    PNODE Head = NULL;
    PNODE temp1, temp2;
    bool bret = false;
    
    InsertFirst(&Head,60);
    InsertFirst(&Head,50);
    InsertFirst(&Head,40);
    InsertFirst(&Head,30);
    InsertFirst(&Head,20);
    InsertFirst(&Head,10);
    
    temp1 = Head;
    temp2 = Head;
    
    while(temp1 ->next != NULL)
    {
        temp1 = temp1->next;
    }
    
    temp2 = temp2 -> next -> next;
    
    // temp1->next = temp2;
    
    Display(Head);
    
    bret = CheckLoop(Head);
    if(bret == true)
    {
        printf("Loop is detected\n");
    }
    else
    {
        printf("There is no loop\n");
    }
    
    return 0;
}

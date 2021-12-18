#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void fun(PNODE p)
{
    
}

void gun(PPNODE q)
{
    
}

int main()
{
    PNODE  first = NULL;
    
    // Call by value
    fun(first);     // fun(100)     Display(), Count()
    
    // Call by address
    gun(&first);    // gun(50)      InsertFirst(), InsertLast(), InsertAtPos(), DeleteFirst(), DeleteLast(), DeleteAtPso()
    
    return 0;
}

#include "stdio.h"
#include "stdlib.h"

int main()
{

    typedef int Item;
    typedef struct node *link;

    struct node
    {
        Item val;
        link next;
    };



    link x;

    x = (link) malloc(sizeof(struct node));

    return 0;
}
/* menu drived program to implement hash function using 
    1. division method
    2. multiplication method
    3. mid square method
    4. folding method */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define m 100

char result[100];

struct node
{
    int key;
    struct node *next;
};

int division(int key)
{
    return key%m;
}

int multiplication(int key)
{
    float a = (sqrt(5)-1)/2;
    float i = m*((key*a)-(int)(key*a));
    int h = floor(i);
    return h;
}

struct node *table[m] = {NULL};

void insert(int i,int key)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    struct node *ptr;
    new_node->key = key;
    new_node->next = NULL;

    if(table[i]==NULL)
        table[i] = new_node;
    else
    {
        ptr = table[i];
        while(ptr->next!=NULL)
            ptr = ptr->next;
        ptr->next = new_node;
    }
}

void print()
{
    struct node *ptr;
    for(int i=0;i<m;i++)
    {
        printf("%d",i);
        if (table[i] == NULL)
            printf(" -> NULL");
        else
        {
            for(ptr=table[i];ptr!=NULL;ptr=ptr->next)
                printf(" -> %d",ptr->key);
        }
        printf("\n");
    }
}

int main()
{
    int choice,key,i;
    printf("Enter :\n1 for division method\n2 for multiplication method\n3 for mid square method\n4 for folding method\n5 to print the hash table\n6 to exit.\n");
    do
    {
        printf("Enter choice : ");
        scanf("%d",&choice);
        if ((choice!=6) && (choice!=5))
        {
            printf("Enter key : ");
            scanf("%d",&key);
        }
        switch(choice)
        {
            case 1: 
                i = division(key);
                insert(i,key);
                break;
            case 2:
                i = multiplication(key);
                insert(i,key);                
                break;
            case 3:
                i = midsquare(key,2);
                insert(i,key);
                break;
            case 4:
                i = folding(key,2);
                insert(i,key);
                break;
            case 5:
                print();
                break;
            case 6:
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice!=6);
}
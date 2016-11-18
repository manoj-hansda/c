#include <stdio.h>
#include <stdlib.h>

void addAtFirst();
void display();

typedef struct node
{
    int val;
    struct node *next;
} node;

node *head = NULL;

int main()
{
    addAtFirst();
    display();
    addAtFirst();
    display();
    addAtFirst();
    display();
    addAtFirst();
    display();
    addAtFirst();
    display();

    return 0;
}

void addAtFirst()
{
    node *cur = malloc(sizeof(node));
    int elem;
    printf("\nEnter the element: ");
    scanf("%d", &elem);
    cur->val = elem;
    if(head == NULL)
    {
        head = cur;
        cur->next = cur;
    }
    else
    {
        node *tmp, *first;
        tmp = first = head;
        while(tmp->next!=head)
        {
            tmp = tmp->next;
        }
        head = cur;
        cur->next = first;
        tmp->next = cur;
    }
}

void display()
{
    node *cur = head;
    do
    {
        printf("%d ", cur->val);
        cur = cur->next;
    } while(cur!=head);
}

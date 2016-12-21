#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

node *head = NULL;
int length = 0;

void addElementAtEnd();
void addElementAtPos(int);
void delElement(int);
void displayList();

void main()
{
    printf("\t Linked List \n");
    printf("\t ----------- \n");

    char choice;
    do
    {
        int option, position;
        printf("1. Add element at the end\n");
        printf("2. Add element at specific position\n");
        printf("3. Delete an element\n");
        printf("\nEnter any option: ");
        scanf("%d", &option);

        switch(option)
        {
            case 1:
                addElementAtEnd();
                break;
            case 2:
                printf("Enter the position: ");
                scanf("%d", &position);
                addElementAtPos(position);
                break;
            case 3:
                printf("Enter the position: ");
                scanf("%d", &position);
                delElement(position);
                break;
            default:
                printf("\nInvalid option!\n");
                break;
        }

        printf("\nContinue? (Press 'y'): ");
        scanf(" %c", &choice);
        printf("--------------------------------------------\n");
    }
    while(choice == 'y' || choice == 'Y');
}

void addElementAtEnd(int pos)
{
    printf("Enter the element: ");
    int elem;
    scanf("%d", &elem);

    node *newNode = (node*)malloc(sizeof(node));
    newNode->data = elem;
    newNode->next = NULL;

    if(head == NULL)
    {
        head = newNode;

        length++;
        displayList();
        return;
    }

    node *cur = head;

    while(cur->next != NULL)
        cur = cur->next;

    cur->next = newNode;

    length++;
    displayList();
}

void addElementAtPos(int pos)
{
    if(pos > length)
    {
        printf("\nInvalid position!");
        return;
    }

    printf("Enter the element: ");
    int elem;
    scanf("%d", &elem);

    node *newNode = (node*)malloc(sizeof(node));
    newNode->data = elem;

    node *cur = head;

    while(--pos)
        cur = cur->next;

    newNode->next = cur;
    cur->next = newNode;

    length++;
    displayList();
}

void delElement(int pos)
{
    if(pos > length)
    {
        printf("\nInvalid position!");
        return;
    }

    displayList();
}

void displayList()
{
    node *cur = head;

    printf("\n head--->");
    while(cur != NULL)
    {
        printf("[%d]---", cur->data);
        cur = cur->next;
    }
    printf(">NULL\n");
}

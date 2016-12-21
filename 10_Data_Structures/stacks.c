#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

void push(int);
int pop();
void display();

node *top = NULL;

void main()
{
    printf("\t Stack \n");
    printf("\t ----- \n");

    int option, element;
    char choice;
    do
    {
        printf("1. Push element\n");
        printf("2. Pop element\n");
        printf("\nEnter any option: ");
        scanf("%d", &option);

        switch(option)
        {
            case 1:
                printf("Enter the element: ");
                scanf("%d", &element);
                push(element);
                break;
            case 2:
                element = pop();
                if (element != -1)
                    printf("\n*** %d popped out of stack ***\n", element);
                break;
            default:
                printf("\nInvalid option!\n");
                break;
        }

        display();

        printf("\nContinue? (Press 'y'): ");
        scanf(" %c", &choice);
        printf("--------------------------------------------\n");
    }
    while(choice == 'y' || choice == 'Y');
}

void push(int elem)
{
    node *newNode = (node*)malloc(sizeof(node));

    newNode->data = elem;
    newNode->next = top;

    top = newNode;

    printf("\n*** %d pushed into stack ***\n", elem);
}

int pop()
{
    if(top == NULL)
    {
        printf("\n*** Stack is empty! ***\n");
        return -1;
    }

    node *temp = top;
    top = top->next;

    int elem = temp->data;

    if(top == NULL)
    {
        printf("\n*** %d popped out of stack ***\n", elem);
        printf("\n*** Stack has been emptied! ***\n");
        return -1;
    }

    free(temp);

    return elem;
}

void display()
{
    node *cur = top;

    while(cur != NULL)
    {
        if(cur == top)
            printf("\n%d [Top]\n", cur->data);

        else
            printf("%d\n", cur->data);

        cur = cur->next;
    }
}

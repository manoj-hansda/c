#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

void enqueue(int);
int dequeue();
void display();

node *front = NULL;
node *rear = NULL;

void main()
{
    printf("\t Queue \n");
    printf("\t ----- \n");

    int option, element;
    char choice;

    do
    {
        printf("1. Enqueue element\n");
        printf("2. Dequeue element\n");
        printf("\nEnter any option: ");
        scanf("%d", &option);

        switch(option)
        {
            case 1:
                printf("Enter the element: ");
                scanf("%d", &element);
                enqueue(element);
                break;
            case 2:
                element = dequeue();
                if (element != -1)
                    printf("\n*** %d removed from queue ***\n", element);
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

void enqueue(int elem)
{
    node *newNode = (node*)malloc(sizeof(node));

    newNode->data = elem;
    newNode->next = NULL;

    if(front == NULL)
        front = rear = newNode;

    else
    {
        rear->next = newNode;
        rear = newNode;
    }

    printf("\n*** %d inserted to queue ***\n", elem);
}

int dequeue()
{
    if(front == NULL)
    {
        printf("\n*** Queue is empty! ***\n");
        return -1;
    }

    node *temp = front;
    front = front->next;

    int elem = temp->data;

     if(front == NULL)
     {
         printf("\n*** %d removed from queue ***\n", elem);
         printf("\n*** Queue has been emptied! ***\n");
         return -1;
     }

    free(temp);

    return elem;
}

void display()
{
    if(front == NULL)
        return;

    node *cur = front;

    printf("\n[Front] ");
    while(cur != NULL)
    {
        if(cur == rear)
            printf("%d", cur->data);

        else
            printf("%d -- ", cur->data);

        cur = cur->next;
    }
    printf(" [Rear]\n");
}

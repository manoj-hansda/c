#include <stdio.h>
#include <stdlib.h>

void push();
void pop();
int isFull();
int isEmpty();
void display();

int *stack, size, top = -1;

void main()
{
    printf("Enter the size of stack: ");
    scanf("%d", &size);

    stack = malloc(size*sizeof(int));

    char choice;

    do
    {
        int option;
        printf("\n1.Push Element \t 2.Pop Element\t 3.Display stack\n");
        printf("Choose stack operation: ");
        scanf("%d", &option);

        switch(option)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            default:
                printf("Invalid choice!\n");
                break;
        }

        printf("continue? (y/n): ");
        scanf(" %c", &choice);
    } while(choice == 'y');
}

void push()
{
    int full = isFull();
    if(full)
        printf("\nStack is full!\n");

    else
    {
        int elem;
        printf("\nEnter the element: ");
        scanf("%d", &elem);
        top = top + 1;
        stack[top] = elem;
    }
}

void pop()
{
    int empty = isEmpty();

    if(empty)
        printf("\nStack is empty!\n");

    else
    {
        int elem = stack[top];
        top = top - 1;
        printf("\nElement: %d\n", elem);
    }
}

int isFull()
{
    if(top == size-1)
        return 1;
    else
        return 0;
}

int isEmpty()
{
    if(top == -1)
        return 1;
    else
        return 0;
}

void display()
{
    int i;

    printf("Stack contains:\n");
    for(i=0; i<=top; i++)
        printf("%d", stack[i]);
    printf("\n");
}

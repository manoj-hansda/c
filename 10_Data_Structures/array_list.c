#include <stdio.h>
#define MAXSIZE 100

int arr[MAXSIZE];
int end = -1;
int count = 0;

void addElement();
void insertAtPos(int);
void removeFromPos(int);
void modifyElement(int);
void display();

void main()
{
    int option, elem, position;
    printf("1. Add an element\n");
    printf("1. Insert an element at specific position\n");
    printf("2. Remove an element from specific position\n");
    printf("Enter any option: ");
    scanf("%d", &option);


    switch(option)
    {
        case 1:
            printf("Enter element: ");
            scanf("%d", &elem);
            break;
        case 2:
            printf("Enter element: ");
            scanf("%d", &elem);
            printf("Enter position: ");
            scanf("%d", &position);
            break;
        case 3:
            printf("Enter position: ");
            scanf("%d", &position);
            break;
        default:
            printf("\nInvalid option\n");
            break;
    }
}

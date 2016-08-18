#include <stdio.h>

int main()
{
    int marks;

    printf("Enter marks: ");
    scanf("%d", &marks);


    if(marks>=0 && marks<=100)
        printf("Valid marks");

    if(marks<0 || marks>100)
        printf("Invalid marks");

    getch();
}

#include <stdio.h>

void getDetails(struct student *s)
{
    puts("\nEnter details of student: ");
    printf(" ID: ");
    scanf("%d", &s.id);
    printf(" Name: ");
    scanf("%s", s.name);
    printf(" Marks: ");
    scanf("%f", &s.marks);
}

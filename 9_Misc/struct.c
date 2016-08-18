#include <stdio.h>

struct student
{
    int roll;
    char name[30];
    float marks;
};

void main()
{
    struct student s1, s2;

    s1.roll = 5;
    s1.marks = 98.5;

    s2.roll= 6;
    s2.marks = 95.5;


    printf("s1.roll = %d\n", s1.roll);
    printf("s2.roll = %d", s2.roll);
}

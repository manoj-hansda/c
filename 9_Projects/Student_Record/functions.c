#include <stdio.h>
#include "functions.h"

int viewMenu()
{
    int opt;
    puts("1.Add new record \t 2.View all records");
    printf("Enter option: ");
    scanf("%d", &opt);
    return opt;
}

void getDetails()
{
    puts("\nEnter details of student: ");
    printf(" ID: ");
    scanf("%d", &s.id);
    getchar();
    printf(" Name: ");
    gets(s.name);
    printf(" Marks: ");
    scanf("%f", &s.marks);
}

void writeFile()
{
    FILE *fp;
    fp = fopen("data.txt", "a");
    if(fp == NULL)
        puts("unable to open file");

    else
    {
        fprintf(fp, "%d %s %.2f\n", s.id, s.name, s.marks);
        puts("data added succesfully.");
        fclose(fp);
    }
}

void readFile()
{
    FILE *fp;
    fp = fopen("data.txt", "r");
    if(fp == NULL)
        puts("unable to open file");

    else
    {
        puts("\n ID \t Name \t\t Marks");
        puts("-------------------------------------");

        while(fscanf(fp, "%d%s%f", &s.id, s.name, &s.marks) > 0)
            printf("%d \t %s \t %.2f\n", s.id, s.name, s.marks);

        fclose(fp);
    }
}

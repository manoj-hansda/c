#include <stdio.h>

int viewMenu();
void getDetails();
void writeFile();
void readFile();

struct student
{
    int id;
    char name[30];
    float marks;
} s;

int main()
{
    puts("STUDENT'S DETAIL BOOK");
    puts("---------------------");

    int option = viewMenu();
    int count = 0;
    char cont;

    switch (option)
    {
        case 1:
            do
            {
                getDetails();
                writeFile();
                count++;
                printf("continue adding? (press 'y'): ");
                cont = getchar();
                cont = getchar();
            } while(cont == 'y' || cont == 'Y');

            printf("\n%d record(s) added succesfully\n", count);
            break;

        case 2:
            readFile();
            break;

        default:
            break;
    }

    return 0;
}

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
    printf(" Name: ");
    scanf("%s", s.name);
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
        while(fscanf(fp, "%d %s %f", &s.id, &s.name, &s.marks) > 0)
            printf("ID: %d, Name: %s, Marks: %.2f\n", s.id, s.name, s.marks);

        fclose(fp);
    }
}

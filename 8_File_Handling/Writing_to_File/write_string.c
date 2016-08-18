
#include <stdio.h>

int main()
{
    FILE *fp;
    char fileName[50];

    printf("Enter name for file (with extension): ");
    gets(fileName);

    fp = fopen(fileName, "w");

    if(fp!=NULL) {
        printf("file opened succesfully.\n");

        char choice, line[100];

        do {
            printf("\nEnter string: ");
            gets(line);
            fputs(line, fp);
            printf("continue? (press 'y'): ");
            choice=getchar();
            getchar();
        } while (choice=='y' || choice=='Y');

        fclose(fp);
        printf("\ndata added to file succesfully.\n");
    }
    else
        printf("unable to open file.\n");

    getch();
    return 0;
}

#include <stdio.h>

int main()
{
    FILE *fp;
    char fileName[50];
    printf("Enter name of file (with extension): ");
    gets(fileName);
    fp = fopen(fileName, "r");

    if(fp!=NULL) {
        char line[10];

        while(feof(fp)==0) {
            fgets(line, 10, fp);
            printf("%s", line);
        }
    }

    else {
        printf("unable to open file.\n");
        printf("Please make sure that the file exists.");
    }

    getch();
    return 0;
}

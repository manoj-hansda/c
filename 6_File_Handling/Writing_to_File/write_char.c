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
        printf("Enter data to be written in file (no backspace allowed):\n\n");

        char ch = 0;

        while(ch!=13){
            ch = getch();
            printf("%c", ch);
            fputc(ch, fp);
        }

        fclose(fp);
        printf("\ndata added to file succesfully.\n");
    }
    else
        printf("unable to open file.\n");

    getch();
    return 0;
}

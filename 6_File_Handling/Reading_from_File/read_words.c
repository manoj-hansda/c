#include <stdio.h>

int main()
{
    FILE *fp;
    char fileName[50];

    printf("Enter name of file (with extension): ");
    gets(fileName);
    fp = fopen(fileName, "r");

    if(fp==NULL)
    {
        printf("unable to open file.\n");
        printf("Please make sure that the file exists.");
    }

    else
    {
        printf("%s contains following words:\n\n", fileName);
        char ch;

        while((ch=fgetc(fp)) != EOF)
        {
            if(ch == 32 || ch == '\t')
                putchar('\n');
            else
                putchar(ch);
        }
    }

    getch();
    return 0;
}

#include <stdio.h>

int main()
{
    FILE *fp;
    char fileName[50];
    printf("Enter name of file (with extension): ");
    gets(fileName);
    fp = fopen(fileName, "w+");

    char data[100];
    fputs("ooooooooooooooooooooooooooooooooo", fp);
    printf("Enter data: ");
    gets(data);
    fseek(fp, 5, SEEK_SET);
    fputs(data, fp);

    printf("data added sucessfully.");
    fclose(fp);

    getch();
    return 0;
}

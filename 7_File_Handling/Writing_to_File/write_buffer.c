#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp;
    char fileName[50];

    printf("Enter name for file (with extension): ");
    gets(fileName);

    fp = fopen(fileName, "w");

    if(fp!=NULL) {
        printf("file opened succesfully.\n");
        printf("Enter data (press 'z' when done'); \n");

        int i=0, j, k=3;
        char ch, data[100][100];

        do
        {
            printf("->");
            gets(data[i]);
            fwrite(data[i], sizeof(char), strlen(data[i]), fp);
            i++;
            fputc(32, fp);
            printf("  continue ? (press 'y'): ");
            scanf("%c", &ch);
            getchar();
        } while(ch=='y' || ch=='Y');

        fclose(fp);
        printf("\nFollowing data have been added to file succesfully.\n\n");

        fp = fopen(fileName, "r");

        for(j=0; j<i; j++)
        {
            fread(data[j], sizeof(char), strlen(data[j]), fp);
            puts(data[j]);
            fp++;
        }
    }
    else
        printf("unable to open file.\n");

    getch();
    return 0;
}

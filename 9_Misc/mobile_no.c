#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
    int i, flag=0;
    char pre[100]="+91-", no[100];
    printf("ENter your mobile no: ");
    scanf("%s", no);
    if(strlen(no)!=10)
    {
        printf("invalid no.");
        getch();
        exit(0);
    }
    for(i=0;no[i]!='\0';i++)
    {
        if(!isdigit(no[i]))
        {
            flag=1;
            printf("invalid no.");
            break;
        }

    }
    if(flag==0)
    {
        strcat(pre, no);
        system("cls");
        printf("%s", pre);
        getch();
    }
}

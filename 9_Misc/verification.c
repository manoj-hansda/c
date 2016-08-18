#include<stdio.h>
#include<conio.h>

void main()
{
    int i=0, j, k=5, match=1;
    char name[100], ent[50], pwd[50]="abcde";

    printf("user name: ");
    scanf("%s", name);
    printf("password: ");

    while(1)
    {
        ent[i]=getch();
        if(ent[i]==13)
            break;
        printf("*");
        i++;
    }

   for(j=0; j<i; j++)
    {
        if(ent[j]!=pwd[j])
            match=0;
    }

    if(match==1)
        printf("\nwelcome %s", name);
    else
        printf("\nwrong password");
}

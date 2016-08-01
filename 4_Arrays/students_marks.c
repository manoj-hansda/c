#include<stdio.h>

void main()
{
    int i, arr[100], subjects, total=0;
    float perc;
    printf("Enter number of subjects: ");
    scanf("%d", &subjects);

    printf("\n");
    for(i=1; i<=subjects; i++)
    {
        printf("Enter marks in subject %d: ", i);
        scanf("%d", &arr[i]);
        if(arr[i]<0 || arr[i]>100)
        {
            printf("invalid marks!\n");
            i--;
            continue;
        }
    }

    for(i=1; i<=subjects; i++)
    {
        total = total + arr[i];
    }

    printf("\nTotal marks = %d (out of %d)", total, (subjects*100));
    perc = (total*100)/(subjects*100);
    printf("\nPercentage = %.2f %%\n", perc);

    getch();
}

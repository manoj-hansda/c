#include <stdio.h>
#include <time.h>

int main()
{
    int ll, ul, num;

    srand(time(NULL));

    printf("Enter the lower limit: ");
    scanf("%d", &ll);
    printf("Enter the upper limit: ");
    scanf("%d", &ul);

    if(ul >= ll && ul != 0)
    {
        num = rand();
        num = ll + (num%ul+1);
        printf("Random Number: %d", num);
    }

    else
        printf("error in range!");

    return 0;
}

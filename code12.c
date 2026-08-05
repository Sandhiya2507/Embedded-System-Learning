#include <stdio.h>

int main()
{
    int temp, i;
    int count = 0;

    for(i = 1; i <= 5; i++)
    {
        printf("Enter temperature %d: ", i);
        scanf("%d", &temp);

        if(temp > 35)
        {
            count++;
        }
    }

    printf("Number of temperatures above 35 = %d\n", count);

    return 0;
}

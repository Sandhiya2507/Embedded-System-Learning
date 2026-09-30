#include <stdio.h>

int increase(int*ptr)
{
    
*ptr+=10;
}

int main()
{
    int num = 20;

    increase(&num);

    printf("%d", num);

    return 0;
}

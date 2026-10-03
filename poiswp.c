#include <stdio.h>

void swap_pointers(const int **p1, const int **p2)
{
    const int *temp;

    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main()
{
    int a = 10;
    int b = 20;

    const int *p1 = &a;
    const int *p2 = &b;

    printf("Before swapping:\n");
    printf("*p1 = %d\n", *p1);
    printf("*p2 = %d\n", *p2);

    swap_pointers(&p1, &p2);

    printf("\nAfter swapping:\n");
    printf("*p1 = %d\n", *p1);
    printf("*p2 = %d\n", *p2);

    return 0;
}

#include <stdio.h>

void move_zeros(int *arr, int n)
{
    int *read;
    int *write;
    int temp;

    write = arr;

    for (read = arr; read < arr + n; read++)
    {
        if (*read != 0)
        {
            temp = *write;
            *write = *read;
            *read = temp;

            write++;
        }
    }
}

int main()
{
    int arr[] = {0, 1, 0, 3, 12};
    int n = 5;
    int i;

    move_zeros(arr, n);

    printf("Array = ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}

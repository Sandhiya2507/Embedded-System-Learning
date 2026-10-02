#include <stdio.h>
#include <stddef.h>

void reverse_array_ptr(int *arr, size_t n)
{
    int *left = arr;
    int *right = arr + n - 1;
    int temp;

    while (left < right)
    {
        temp = *left;
        *left = *right;
        *right = temp;

        left++;
        right--;
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int i;

    reverse_array_ptr(arr, 5);

    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

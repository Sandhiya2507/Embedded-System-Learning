#include <stdio.h>

int find_missing(int *arr, int n)
{
    int xor_value = 0;
    int i;

    for (i = 0; i < n; i++)
    {
        xor_value = xor_value ^ i;
        xor_value = xor_value ^ arr[i];
    }

    xor_value = xor_value ^ n;

    return xor_value;
}

int main()
{
    int arr[] = {3, 0, 1};
    int n = 3;

    printf("Missing number = %d\n", find_missing(arr, n));

    return 0;
}

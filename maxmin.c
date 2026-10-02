#include <stdio.h>
#include <stddef.h>

int array_stats(const int *arr, size_t n,
                int *out_min, int *out_max, long *out_sum)
{
    const int *p;
    
    if (arr == NULL || n == 0 || out_min == NULL ||
        out_max == NULL || out_sum == NULL)
    {
        return 0;
    }

    p = arr;

    *out_min = *p;
    *out_max = *p;
    *out_sum = 0;

    while (p < arr + n)
    {
        if (*p < *out_min)
        {
            *out_min = *p;
        }

        if (*p > *out_max)
        {
            *out_max = *p;
        }

        *out_sum = *out_sum + *p;

        p++;
    }

    return 1;
}

int main()
{
    int arr[] = {10, 5, 20, 8, 15};
    int min, max;
    long sum;

    array_stats(arr, 5, &min, &max, &sum);

    printf("Minimum = %d\n", min);
    printf("Maximum = %d\n", max);
    printf("Sum = %ld\n", sum);

    return 0;
}

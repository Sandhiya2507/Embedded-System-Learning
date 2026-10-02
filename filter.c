#include <stdio.h>
#include <stddef.h>

size_t filter_sensor_data(int *arr, size_t n, int min_val, int max_val)
{
    int *read = arr;
    int *write = arr;

    while (read < arr + n)
    {
        if (*read >= min_val && *read <= max_val)
        {
            *write = *read;
            write++;
        }

        read++;
    }

    return write - arr;
}

int main()
{
    int arr[] = {10, 55, 20, 80, 30, 5, 40};
    size_t new_size;
    size_t i;

    new_size = filter_sensor_data(arr, 7, 10, 40);

    printf("Filtered array: ");

    for (i = 0; i < new_size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nNumber of retained elements = %zu\n", new_size);

    return 0;
}

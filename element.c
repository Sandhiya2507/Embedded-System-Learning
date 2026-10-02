#include <stdio.h>
#include <stddef.h>

const int *search_array(const int *arr, size_t n, int key)
{
    const int *p = arr;

    while (p < arr + n)
    {
        if (*p == key)
        {
            return p;
        }

        p++;
    }

    return NULL;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int key = 30;
    const int *result;

    result = search_array(arr, 5, key);

    if (result != NULL)
    {
        printf("Element found = %d\n", *result);
    }
    else
    {
        printf("Element not found\n");
    }

    return 0;
}

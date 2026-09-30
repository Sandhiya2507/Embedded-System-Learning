#include <stdio.h>

int reverse(char *p, int n)
{
    char *first;
    char *last;
    char temp;

    first = p;
    last = p + (n - 1);

    
   
        temp = *first;
        *first = *last;
        *last = temp;

        first++;
        last--;
    
}

int main()
{
    char arr[20] = {"three"};
    int n = 5;

    reverse(arr, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}


#include <stdio.h>

void reverse_string(char *str)
{
    char *start = str;
    char *end = str;
    char temp;

    // Move end pointer to the null character
    while (*end != '\0')
    {
        end++;
    }

    // Move back to the last character
    end--;

    // Swap characters using two pointers
    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%99[^\n]", str);

    reverse_string(str);

    printf("Reversed string: %s\n", str);

    return 0;
}

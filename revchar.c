#include <stdio.h>

void reverse_string(char *str)
{
    char *start = str;
    char *end = str;
    char temp;

    /* Find the end of the string */
    while (*end != '\0')
    {
        end++;
    }

    /* Move to the last character */
    end--;

    /* Swap characters using two pointers */
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
    char str[] = "HELLO";

    reverse_string(str);

    printf("Reversed string = %s\n", str);

    return 0;
}

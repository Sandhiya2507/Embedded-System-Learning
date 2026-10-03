#include <stdio.h>

int is_palindrome(const char *str)
{
    const char *start = str;
    const char *end = str;

    // Move end pointer to the null character
    while (*end != '\0')
    {
        end++;
    }

    // Move back to the last character
    end--;

    // Compare characters from both ends
    while (start < end)
    {
        if (*start != *end)
        {
            return 0;
        }

        start++;
        end--;
    }

    return 1;
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%99[^\n]", str);

    if (is_palindrome(str))
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not a palindrome\n");
    }

    return 0;
}

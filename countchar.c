#include <stdio.h>
#include <stddef.h>

size_t custom_strnlen(const char *str, size_t max_cap)
{
    size_t count = 0;

    if (str == NULL)
        return 0;

    while (count < max_cap && str[count] != '\0')
    {
        count++;
    }

    return count;
}

int main()
{
    char str[] = "EMBEDDED";
    size_t max_cap = 20;

    printf("Length = %zu\n", custom_strnlen(str, max_cap));

    return 0;
}

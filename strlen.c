#include <stdio.h>
#include <stddef.h>

size_t custom_strnlen(const char *str, size_t max_cap)
{
    const char *p = str;

    while (p < str + max_cap && *p != '\0')
    {
        p++;
    }

    return p - str;
}

int main()
{
    char str[] = "Embedded";

    printf("Length = %zu\n", custom_strnlen(str, 20));

    return 0;
}

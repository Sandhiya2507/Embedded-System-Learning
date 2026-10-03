#include <stdio.h>
#include <stddef.h>

int safe_strcpy(char *dst, const char *src, size_t cap)
{
    size_t i = 0;

    if (cap == 0)
    {
        return 1;
    }

    while (src[i] != '\0' && i < cap - 1)
    {
        dst[i] = src[i];
        i++;
    }

    dst[i] = '\0';

    if (src[i] != '\0')
    {
        return 1;   // Truncated
    }

    return 0;       // Copied completely
}

int main()
{
    char source[] = "Embedded Systems";
    char destination[10];

    int result;

    result = safe_strcpy(destination, source, sizeof(destination));

    printf("Source      : %s\n", source);
    printf("Destination : %s\n", destination);

    if (result == 1)
    {
        printf("String was truncated.\n");
    }
    else
    {
        printf("String copied completely.\n");
    }

    return 0;
}

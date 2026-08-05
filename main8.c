#include<stdio.h>

int main()
{
    int celsius;
    int fahrenheit;

    printf("Enter Celsius temperature: ");
    scanf("%d", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("Fahrenheit temperature is %d\n", fahrenheit);

    return 0;
}

#include <stdio.h>

int main()
{
    // Program to convert, Celsius into Fahrenheit
    // Formula : (9/5 * c)+32

    float celsius, fahrenheit;

    printf("Enter the number in celsius = ");
    scanf("%f", &celsius);

    fahrenheit = ((9.0 / 5.0) * celsius) + 32;
    printf("Value in fahrenheit = %f", fahrenheit);

    return 0;
}
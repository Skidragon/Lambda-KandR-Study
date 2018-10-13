#include <stdio.h>

// #define line defines a symbolic name or symbolic constant to be a particular string of characters.

#define LOWER 0
#define UPPER 300
#define STEP 20
int main(void)
{
    // a locale is a set of parameters that defines the user's language, region and any special variant preferences that the user wants to see in their user interface. 

    float fahr, celsius;

    fahr = UPPER;
    printf("  °F\t  °C\n");
    printf("------------\n");
    while (fahr >= LOWER) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %8.2f\n", fahr, celsius);
        fahr -= STEP;
    }
    return 0;
}
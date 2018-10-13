#include <stdio.h>


int main(void) {
    
    // Exercise 1-6
    printf("Result: %d\n\n", EOF); //Result: -1

    // Exercise 1-7
    int c = getchar();
    // Since Ascii characters is 0 or greater
    // and EOF = -1 then the following result will be 1
    printf("%d\n", c != EOF);

    // Why doesn't this end when pressing enter?
    // is it because there is no '\0'
    char d;
    while((d = getchar()) != EOF) {
        putchar(d);
    }
  

    return 0;
}
#include <stdio.h>
main() /* Convert input to lowercase */ 
{
    int c;

    while((c = getchar()) != EOF) {
        if (c >= 65 && c <= 90)
            c = c + 32;
        putchar(c);
    }
}
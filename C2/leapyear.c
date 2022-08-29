#include <stdio.h>
/* is teh year leap? */
main() {
    int year;
    printf("Give me a year: ");
    scanf("%d", &year);

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        printf("It's a leap year\n");
    else 
        printf("Nope, regular year\n");

    printf("%d\n", year);
}
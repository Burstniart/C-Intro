#include <stdio.h>
/* avoid magic numbers and define constant values */
#define LOWER 0
#define UPPER 300
#define STEP 20

main() {
    int fahr;
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP )
        printf("%4d %6.1f\n", fahr, (5.0/9.0)*(32-fahr));
}

/* print Fahrenheit-Celcius table
for f = 0, 20, ..., 300 */
/* Exercise 1-3. Modify the temperature conversion program to print a heading above the table.

Exercise 1-4. Write a program to print the corresponding Celsius to Fahrenheit table.

Exercise 1-5. Modify the temperature conversion program to print the table in reverse order, that is, from 300 degrees to 0. */

/*
main()
{
    int lower, upper, step;
    float fahr, celsius;
         
    step = 20;          

    printf("Enter lowest Fahrenheit value: ");
    scanf("%d", &lower);

    printf("Enter highest Fahrenheit value: ");
    scanf("%d", &upper);

    fahr = lower;

    printf("Fahrenheit to Celcius convertion table AKA FtCCT\n");
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%4.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

    fahr = upper;
    while (fahr >= lower) {
        printf("%4.0f %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
        fahr = fahr-step;
    }    
} 
*/


/* #include <stdio.h>  is obligatory for this programs
so is main(), 
must declare variables and types before using them
scanf must accept the same data type as declared above*/

/* Alternative code, also for loop */
/*
main()  
{
    int fahr;
    for(fahr = 300; fahr >= 0; fahr = fahr - 20)
        printf("%4d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
        */
/*
    for(fahr = 0; fahr <= 300; fahr = fahr + 20)
        printf("%4d %6.1f\n", fahr, (5.0/9.0) * (fahr-32));
}
*/
#include <stdio.h>

/* print Fahrenheit-Celcius table
for f = 0, 20, ..., 300 */
/*Exercise 1-3. Modify the temperature conversion program to print a heading above the table.

Exercise 1-4. Write a program to print the corresponding Celsius to Fahrenheit table.*/

main()
{
    int lower, upper, step;
    float fahr, celsius;
    /* lower = 0;          /* lower limit of temperature table */
    /* upper = 300;        /* upper limit */
    step = 20;          /* a step size */

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
} 


/* #include <stdio.h>  is obligatory for this programs
so is main(), 
must declare variables and types before using them
scanf must accept the same data type as declared above*/

/*
main()  Alternative code, also for loop
{
    int fahr;
    for(fahr = 0; fahr <= 300; fahr = fahr + 20)
        printf("%4d %6.1f\n", fahr, (5.0/9.0) * (fahr-32));
}
*/
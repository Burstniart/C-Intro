#include <stdio.h>
main() {
    printf("Hello, Monika!\n");
    int lower, upper, fahr;
    printf("Start calculations from (C°): ");
    scanf("%d", &lower);
    printf("Set limit to (C°): ");
    scanf("%d", &upper);
    printf("Celsius|Farenheit\n");

    for (fahr = 0; fahr <= upper; fahr = fahr + 20)
	printf("%4d    %6.1f\n", fahr, 
		(5.0/9.0)*(fahr-32));
}

/* Exercise 1-12. Write a program to print a histogram of the lengths 
of words in its input. It is easiest to draw the histogram horizontally;
 a vertical orientation is more challenging.
*/

#include <stdio.h>

#define YES 1
#define NO  0
#define SMALL   4
#define LARGE   8
        
main() {
    int c, inword, i, j, clen;
    int wrdlen[3];

    for (i = 0; i < 3; ++i)
        wrdlen[i] = 0;

    while((c = getchar()) != EOF) {
        clen++;
        if (c == ' ' || c == '\n' || c == '\t') {
            if (clen <= SMALL){
                ++wrdlen[0];}
            else if (clen > SMALL && clen < LARGE){
                ++wrdlen[1];}
            else if (clen >= LARGE){
                ++wrdlen[2];}
            inword = NO;
            clen = 0;}
        else if (inword == NO) {
            inword = YES;
        }   
    }
    printf("%d %d %d\n", wrdlen[0], wrdlen[1], wrdlen[2]);
    for (i = 0; i < 3; i++) {
        for (j = 0; j <= wrdlen[i]; j++) {
            printf("=");
        }
        putchar('\n');
    }

}
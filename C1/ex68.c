/* Exercise 1-6. Write a program to count blanks, tabs, and newlines.

Exercise 1-7. Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank.

Exercise 1-8. Write a program to replace each tab by the three-character sequence >, backspace, -, which prints as >, 
and each backspace by the similar sequence <. This makes tabs and backspaces visible.
 */

#include <stdio.h>

#define YES 1
#define NO  0

main() {
    /* ex 6
    int blnks, tbs, nls, c, chars;
    blnks = 0;
    tbs = 0;
    nls = 0;
    chars = 0;
    while((c=getchar()) != EOF) {
        ++chars;
        if(c == ' ')
            ++blnks;
        if(c == '\t')
            ++tbs;
        if (c == '\n')
            ++nls;
    }
    printf("%d %d %d\n", blnks, tbs, nls);
*/
    /* ex 7 replaces +1 blanks to just one / doesnt react to tabs and prints with newlines 
    int c, stop;
    while((c = getchar()) != EOF) {
        if (c == ' ' && stop == NO) {
            putchar(c);
            stop = YES;
        }
        else if (c == ' ' && stop == YES ) 
            ;
        else {
            putchar(c);
            stop = NO;
        }
    }*/
    /* ex 8 make tabs and backspaces visible*/
    int c, i;
    while((c = getchar()) != EOF) 
        if(c == '\b') {
        putchar('a');}
        else if(c == '\t') {
        printf("tabs");
            for (i = 0; i < 2; ++i)
                putchar('>');}
        else
            putchar(c);
    
}

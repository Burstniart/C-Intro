/* Exercise 1-9. How would you test the word count program? What are some boundaries?
If a single word is an array of characters that are separated by blanks or new lines count those

Exercise 1-10. Write a program which prints the words in its input, one per line.


Exercise 1-11. Revise the word count program to use a better definition of "word," 
for example, a sequence of letters, digits and apostrophes that begins with a letter. */

#include <stdio.h>

#define YES 1
#define NO  0

main() {/* ex 10 print each word in a new line
    int c, inword;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t') {
            putchar('\b');
            putchar('\n');}
        else 
        putchar(c);
    } */

    /*ex 11
    int c, nl, nw, nc, inword;

    inword = NO;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
            inword = NO;
        else if (inword == NO) {
            inword = YES;
            ++nw;
        }
    }
    printf("%d %d %d\n", nl, nw, nc);
    */
}

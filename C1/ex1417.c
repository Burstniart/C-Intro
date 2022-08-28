/* Exercise 1-14. Revise the main routine of the longest-line program so it will correctly print the length of arbitrarily 
long input lines, and as much as possible of the text.

Exercise 1-15. Write a program to print all lines that are longer than 80 characters.

Exercise 1-16. Write a program to remove trailing blanks and tabs from each line of input, and to delete entirely blank lines.

Page 28
Exercise 1-17. Write a function reverse(s) which reverses the character string s. Use it to write a program which reverses its input a line at a time. */

#include <stdio.h>
#define MAXLINE 1000

main() {
    /* ex 17: reverse string one line at a time */
   
    char line[MAXLINE];
    char save[MAXLINE];
 
    int i, c;

    for (i = 0; (c = getchar()) != EOF && c != '\n'; i++) {
        line[i] = c;;
    }
    
    reverse(line, i, save);

    printf("%s\n", save);

}
reverse(input, length, output)
char input[], output[];
int length;
{
    int i, j;
    j = 0;
    for (i = length -1; i >= 0; i--) {
        output[j] = input[i];
        j++;
    }
    output[j] = ' ';



    /* ex 14: print length of the input and as much text as possible
    int len;
    int max;
    char line[MAXLINE];
    char save[MAXLINE];

    max = 0;
    while ((len = get_line(line, MAXLINE)) > 0)
        if ( len > max) {
            max = len;
            copy(line, save);
        }
    if (max > 0){
        printf("\nMax length reached: %d\n", max-1);
        printf("%s", save);
    }
}
get_line(s, lim)
char s[];
int lim;
{
    int c, i;
    for (i = 0; i < lim-i && (c = getchar()) != EOF && c !='\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return(i);
}
copy(s1, s2)
char s1[], s2[];
{
    int i;
    i = 0;
    while((s2[i] = s1[i]) != '\0')
        ++i;
        */
}

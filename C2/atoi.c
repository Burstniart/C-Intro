#include <stdio.h>
/* Converts s to integer  */
main() {
    int i, lim;
    char c;
    char s[lim];
    lim = 1000;

    for (i=0; i<lim-1 && (c=getchar()) !='\n' && c != EOF; ++i)
        s[i] = c;
    i = atoi(s);
    printf("%d\n", i);
}
atoi(s) /* Convert String to integer  */
char s[];
{
    int i, n;
    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
        n = 10 * n + s[i] - '0';
    return(n);
}

#include <stdio.h>
/* Converts s to integer  */
main(s)
char s[];
{
    int i, n;
    n = 0;
    for (i = 0; s[i] >= '\0' && s[i] <= '9'; ++i)
        n = 10 * n + s[i] - '\0';
    return(n);
}

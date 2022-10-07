#include <stdio.h>
main() {
    int c, i, lim;
    char s[lim];
    lim = 1000;
    int res;
    for (i=0; i<lim-1 && (c=getchar()) != EOF; ++i) {
        s[i] = c;
    }    
    res = atoi(s);
    printf("\n%d", res);
    putchar('\n');
}

char lower(s) /* Converts c to lowercase, ASCII*/
char s[];
{
    int i;
    
    for (i=0; s[i] != '\0'; ++i)
        s[i] = s[i] + 'a' - 'A';
    return(s);
}

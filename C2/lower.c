#include <stdio.h>
main() {
    int c, i, lim;
    char s[lim];
    lim = 1000;
    int res;
    
    for (i=0; i<lim-1 && (c=getchar()) != '\n' && c != EOF; ++i) {
        s[i] = lower(c);
    }    
    
    printf("%s", s);
    putchar('\n');
    /*
    c  = getchar();
    printf("%c",lower(c));
    putchar('\n');
    */
}

lower(c) /* Converts c to lowercase, ASCII*/
int c;
{
    if (c >= 'A' && c <= 'Z')
        return(c + 'a' - 'A');
    else
        return(c);
}

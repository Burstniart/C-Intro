#include <stdio.h>
main() {
    int c, i;
    char s[100];
    
    for (i=0; i<99 && (c=getchar()) != '\n' && c != EOF; ++i) {
        s[i] = lower(c);
    }
    printf("%s\n",s);
}

lower(c)
int c;
{
    c = c >= 'A' && c <= 'Z' ? c + 'a' - 'A' : c;
    return c;
}

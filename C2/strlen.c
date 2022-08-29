#include <stdio.h>

main () {
    int i;
    char inp[60];
    scanf("%s", inp);
    
    printf("of length: %d\n", strilen(inp));
}

strilen(s) /* return length of s */ 
char s[];
{
    int i;
    i = 0;
    while (s[i] != '\0')
        ++i;
    return(i);
}
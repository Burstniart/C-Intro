#include <stdio.h>
main () {
    int c, i;
    char  s[100], t[100];
    i = 0;
    while((c = getchar()) != EOF)
        s[i++] = c;

    expand(s,t);
    printf("\n%s\n",t);
}

expand (s, t)
char s[], t[];
{
    int i;
    for(i = 0; s[i] != '\0'; ++i) {
        switch(s[i]) {
            case '\t':
                t[i] = '\\';
                break;
            case '\n':
                t[i] = '\\';
                break;
            default:
                t[i] = s[i];
                break;
        }
    }
    
} 

#include <stdio.h>
/*Takes string, squeeze function removes every instance of char from array as: squeeze(array, char)*/

main() {
    int i, lim, c;
    char s[lim];
    lim = 100;
    char take;

    for(i = 0; i<lim-1 && (c=getchar()) != '\n' && c != EOF; ++i) {
        s[i] = c;
    }
    printf("Take away a character: ");
    scanf("%c", &take);
    printf("Now let's take away the %c\n", take);
    squeeze(s, take);
    putchar('\n');
}

squeeze(s, c) 
char s[];
int c;
{
    int i, j;
    for (i = j = 0; s[i]!= '\0'; i++) 
        if (s[i] != c) 
            s[j++] = s[i];    
    s[j] = '\0';
    printf("%s",s);
}

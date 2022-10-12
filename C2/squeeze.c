#include <stdio.h>
/*Takes string, squeeze function removes every instance of char from array as: squeeze(array, char)*/

main() {
    int i, lim, c;
    char s[lim];
    char res;
    lim = 100;

    for(i = 0; i<lim-1 && (c=getchar()) != '\n' && c != EOF; ++i) {
        s[i] = c;
    }
    printf("%s",s);
    putchar('\n');
    res = squeeze(s, 'b');
    printf("%s",res);
    putchar('\n');
}

squeeze(s, c) 
char s[];
int c;
{
    int i, j;
    char k[];
    for (i = j = 0; s[i]!= '\0'; i++) {
        if (s[i] != c) {
            k[j++] = s[i];    
        }
    }
    k[j] = '\0';
    return k;

}

#include <stdio.h>
main() {
    int i, c, lim;
    char first[1000];
    lim = 1000;
    char second[100] = "; Said the thick ass femboy";
    for (i = 0; i < lim-1 && (c = getchar()) != '\n' && c != EOF; ++i) {
        first[i] = c;
    }
    putchar('\n');
    strcatU(first, second);
    putchar('\n');
}

strcatU(s, t)
char s[], t[];
{
    int i, j;
    i = j = 0;
    while (s[i] != '\0')
        i++;
    while ((s[i++] = t[j++]) != '\0')
        ;
    printf("%s", s);
}

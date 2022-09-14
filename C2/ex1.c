/* Exercise 2-1. Write a loop equivalent to the for loop above without using &&. */
#include <stdio.h>
main() {
int i, lim;
char c;
char s[1000];
lim = 1000;

/*
for (i=0; i<lim-1 && (c=getchar()) != '\n' && c != EOF; ++i)
     s[i] = c; */
i = 0;
int loop = 1;
while (loop) {
    c = getchar();
    if ( i >= (lim -1))
        loop = 0;
    else if (c == '\n')
        loop = 0;
    else if (c == EOF)
        loop = 0;

    s[i++] = c;
    }

s[i] = '\n';
printf("%s",s);
return 0;

}


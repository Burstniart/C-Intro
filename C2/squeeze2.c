#include <stdio.h>
/*Removes each character from string B in string A*/
main() {
    int i, c;
    char s[100], r[100];
    
    printf("Input a string:\n");
    for(i = 0; i < 99 && (c = getchar()) != '\n' && c != EOF; i++) {
        s[i] = c;
    }
    printf("Characters you wish to search and delete:\n");
    for(i = 0; i < 99 && (c = getchar()) != '\n' && c != EOF; i++) {
        r[i] = c;
    }
/*    squeeze(s,r); */
    int pos = any(s, r);
    printf("Characters searched, position: %d\n", pos);
}

squeeze(A, B)
char A[], B[];

{
    int i,j,k;
    for (k = 0; B[k] != '\0'; ++k) {
        for (i = j = 0; A[i] != '\0'; ++i) {
            if (A[i] != B[k]) {
            A[j++] = A[i];
            } 
        }
  A[j] = '\0';
    }
  printf("%s",A);
}

any(A, B)
char A[], B[];
{
    int i,k, p;
    p = -1;
    for (k = 0; B[k] != '\0'; ++k) {
        for (i = 0; A[i] != '\0'; ++i) {
            if (B[k] == A[i]) {
                p = i; 
                return p;
            }
        }
    }
}

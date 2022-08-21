 #include <stdio.h>

 main() {
    /*
    int c;
    c = getchar();

    while(c != EOF) {
        putchar(c);
        c=getchar();
    }
    */
   /* V2 of copy char
   
   while ((c = getchar()) != EOF)
        putchar(c); 
    */
   
   /* character counting  
   enters count as single values */

    long nc;

    nc = 0;
    while (getchar() != EOF)
    nc++;  
    printf("%ld\n", nc);  
 
    /*
    double nc;

    for (nc = 0; getchar() != EOF; ++nc) 
        ;
        printf("%.0f\n", nc); */

/* ctrl + D to signal EOF, else program gets stuck inside loops */
        
 } 
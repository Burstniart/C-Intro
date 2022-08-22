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

/*
    long nc;

    nc = 0;
    while (getchar() != 'b')
    nc++;  
    printf("%ld\n", nc);  
 
    /*
    double nc;

    for (nc = 0; getchar() != EOF; ++nc) 
        ;
        printf("%.0f\n", nc); */

/* ctrl + D to signal EOF, else program gets stuck inside loops */
/* line counting
also using single quotes is necessary, otherwise it says
something bout pointers and ints  */
    int c, nl;
    nl = 0;
    while ((c = getchar()) != EOF)      
        if (c == '\n')
            ++nl;
    printf("%d\n", nl);
 } 
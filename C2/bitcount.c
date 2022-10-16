#include <stdio.h>
main () {
    printf("%u\n",bitcount(255));
}

bitcount(n) 
unsigned n;
{
    int b;
    for (b = 0; n != 0; n >>= 1)
        if (n & 01)
            b++;
    return(b);
}

#include <stdio.h>
main () {

    printf("%d", getbits(x,4,3));
}

getbits(x, p, n)
unsigned x, p, n;
{
 return ((x >> (p+1-n)) & ~(~0 << n));
}

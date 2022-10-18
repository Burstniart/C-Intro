#include <stdio.h>
main() {
    int arr[] =  {1,2,4,5,7,8,10};
    int binSearch = binary(7, arr, 7);
    printf("%d\n",binSearch);

}

binary (x, v, n)
int x, v[], n;
{
    int low, high, mid;

    low = 0;
    high = n -1;
    while (low <= high)
    {
        mid = (low+high) / 2;
        if (x < v[mid])
            high = mid - 1;
        else if (x > v[mid])
            low = mid + 1;
        else
            return (mid);
    }
    return(-1);
}

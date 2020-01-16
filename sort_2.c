#include <stdio.h>
#include <stdlib.h>
int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
int main()
{
    int i, n, a[7] = {1, 6, 9, 23, 56, 95};
    scanf ("%d", &a[6]);
    qsort(a, 7, sizeof(int), cmpfunc);
    for (i = 0; i < 6; i++)
        printf ("%d,", a[i]);
    printf ("%d\n", a[6]);
    return 0;
}

#include <stdio.h>

int main()
{
    int nombres[10];
    int x;
    int* pn;

    pn = nombres;       /* initialize pointer */

    /* Fill array */
    for (x = 0; x < 10; x++)
    {
        *pn = x + 1;
        pn++;
    }

    pn = nombres;        /* re-initialize pointer */

    /* Display array */
    for (x = 0; x < 10; x++)
    {
        printf("nombres[%d] = %d, Adresse %p\n", x, *pn, pn);
        pn++;
    }

    return(0);
}
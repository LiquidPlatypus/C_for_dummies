#include <stdio.h>

int main()
{
    float temperature[5] = { 58.7, 62.8, 65.0, 63.3, 63.2 };

    printf("Mardi, il fera %.1f\n", *(temperature + 1));
    printf("Vendredi, il fera %.1f\n", *(temperature + 4));

    return(0);
}
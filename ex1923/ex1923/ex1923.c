#include <stdio.h>

void remiser(float* a);

int main()
{
    float prixbase = 42.99;

    printf("L'article coute $%.2f\n", prixbase);
    remiser(&prixbase);
    printf("Apres remise, cela donne $%.2f\n", prixbase);

    return(0);
}

void remiser(float* a)
{
    *a *= 0.90;
}
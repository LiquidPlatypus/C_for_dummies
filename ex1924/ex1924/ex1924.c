#include <stdio.h>

void remiser(float* a);

int main()
{
    float prixbase = 42.99;
    float p;

    p = &prixbase;

    printf("L'article coute $%.2f\n", prixbase);
    remiser(&p);
    printf("Apres remise, cela donne $%.2f\n", prixbase);

    return(0);
}

void remiser(float* a)
{
    *a *= 0.90;
}
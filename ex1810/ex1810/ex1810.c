#include <stdio.h>

int main()
{
    char lead;
    char* sidekick;

    lead = 'A';        /* initialize char variable */
    sidekick = &lead;  /* initialize pointer IMPORTANT! */

    printf("Pour la variable 'lead':\n");
    printf("Taille\t%zd\n", sizeof(lead));
    printf("Contenu\t%c\n", lead);
    printf("Adresse\t%p\n", &lead);
    putchar('\n');
    printf("Pour la variable 'sidekick':\n");
    printf("Contenu\t\t\t%p\n", sidekick);
    printf("Valeur indirecte\t%c\n", *sidekick);

    return(0);
}
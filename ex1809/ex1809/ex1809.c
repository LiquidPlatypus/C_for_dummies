#include <stdio.h>

int main()
{
    char lead;
    char* sidekick;

    lead = 'A';        /* Initialise la variable */
    sidekick = &lead;  /* Initialise le pointeur. IMPORTANT ! */

    printf("Pour la variable 'lead':\n");
    printf("Taille\t%zd\n", sizeof(lead));
    printf("Contenu\t%c\n", lead);
    printf("Adresse\t%p\n", &lead);
    putchar('\n');
    printf("Pour la variable 'sidekick':\n");
    printf("Contenu\t%p\n", sidekick);

    return(0);
}
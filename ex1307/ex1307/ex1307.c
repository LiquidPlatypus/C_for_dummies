#include <stdio.h>
#include <string.h>

int main()
{
    char password[] = "taco";
    char input[15];
    int match;

    printf("Mot de passe ? ");
    scanf_s("%s", input);

    match = strcmp(input,password);
    if (match == 0)
        puts("Mot de passe correct");
    else
        puts("Mauvais mot de passe. Alertez la DGSE.");

    return(0);
}
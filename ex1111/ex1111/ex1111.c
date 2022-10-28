#include <stdio.h>
#include <math.h>

int main()
{
	float resultat, valeur;

	printf("indiquez une valeur fractionnaire : ");
	scanf_s("%f", &valeur);

	resultat = sqrt(valeur);
	printf("Racine caree de %.2f = %.2f\n", valeur, resultat);

	resultat = pow(valeur, 3);
	printf("%.2f puissance cubique = %.2f\n", valeur, resultat);

	resultat = floor(valeur);
	printf("Arrondi par defaut de %.2f ) %.2f\n", valeur, resultat);

	resultat = ceil(valeur);
	printf("Arrondi par exces de %.2f = %.2f\n", valeur, resultat);
	return 0;
}
// Programme interactif
// Dan Gookin, Beginning Programming with C For Dummies
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

struct stypik {
	int maval;
	struct stypik* asuiv;
};
struct stypik* aprems;
struct stypik* acour;
struct stypik* anouv;

int menu(void);
void ajouter(void);
void montrer(void);
void supprimer(void);
struct stypik* creer(void);
void load(char* file);
void save(char* file);

// La fcontion main() ne se charge que de la saisie. Le reste est dans les fonctions.
int main()
{
	int choixmenu = '\0';	// Initilaise la boucle while
	aprems = NULL;

	while (choixmenu != 'Q')
	{
		choixmenu = menu();
		switch (choixmenu)
		{
		case 'M':
			montrer();
			break;
		case 'A':
			ajouter();
			break;
		case 'S':
			supprimer();
			break;
		case 'Q':
			break;
		default:
			break;
		}
	}

	return 0;
}

// Afficher le menu et collecte le choix
int menu(void)
{
	int ch;

	printf("M)ontrer, A)jouter, S)upprimer, Q)uitter: ");
	ch = getchar();
	while (getchar() != '\n')	// Ignore la saisie superflue
		;
	return (toupper(ch));
}

// Ajoute un membre en fin de liste
void ajouter()
{
	if (aprems == NULL)	// Cas unique de aprems
	{
		aprems = creer();
		acour = aprems;
	}
	else    // Cherche le dernier
	{
		acour = aprems;
		while (acour->asuiv)	// Dernier == NULL
			acour = acour->asuiv;
		anouv = creer();
		acour->asuiv = anouv;	// Actualisation lien
		acour = anouv;
	}
	printf("Indiquez une valeur numerique : ");
	scanf_s("%d", &acour->maval);
	acour->asuiv = NULL;
	while (getchar() != '\n')	// Ignore la saisie superflue
		;
}

// Affiche tous les enregs de la liste
void montrer(void)
{
	int count = 1;

	if (aprems == NULL)
	{
		puts("Rien a afficher");
		return;
	}
	puts("Affichage complet :");
	acour = aprems;
	while (acour)	// Dernier == NULL
	{
		printf("Enregistrement %d: %d\n", count, acour->maval);
		acour = acour->asuiv;
		count++;
	}
}

// Supprime un enreg de la liste
void supprimer(void)
{
	struct stypik* eprec;	// Sauve l'enreg d'avant
	int r, c;

	if (aprems == NULL)		// Teste si liste vide
	{
		puts("Aucun enregistrement!");
		return;
	}
	puts("Choisissez quel enreg. supprimer :");
	montrer();
	printf("Enregistrement : ");
	scanf_s("%d", &r);
	while (getchar() != '\n')	// Ignore la saisie superflue
		;
	c = 1;
	acour = aprems;
	eprec = NULL;	// Pas de précédent du 1er
	while (c != r)
	{
		if (acour == NULL)	// Teste si 'r' dans la plage
		{
			puts("Enreg introuvable");
			return;
		}
		eprec = acour;
		acour = acour->asuiv;
		c++;
	}
	if (eprec == NULL)		// Cas unique du 1er enreg.
		aprems = acour->asuiv;
	else                    // Raccorde précédent et suivant
		eprec->asuiv = acour->asuiv;
	printf("L'enreg %d n'existe plus.\n", r);
	free(acour);	// Restitue mémoire
}

// Construit une structure vide et renvoie son adresse
struct stypik* creer(void)
{
	struct stypik* a;

	a = (struct stypik*)malloc(sizeof(struct stypik));
	if (a == NULL)
	{
		puts("Erreur malloc()");
		exit(1);
	}
	return (a);
}

void load(char* file)
{
	FILE* fp;
	struct stypik loaded;
	int r, records;

	fp = fopen(file, "r");
	// If an error, assume that the file doesn't exist
	if (fp == NULL)
		return;

	records = 0;
	while (!feof(fp))
	{
		r = fread(&loaded, sizeof(struct stypik), 1, fp);
		if (r == 0)
			break;
		// This code lifted form the create() function
		if (aprems == NULL)
		{
			aprems = creer();
			acour = aprems;
		}
		else
		{
			acour = aprems;
			// Find the NULL
			while(acour->asuiv)
				acour = acour->asuiv;
			acour->asuiv = creer();
			acour = acour->asuiv;
		}
		// Update the new structure with the data pulled from the file
		acour->maval = loaded.maval;
		// Ignore the pointer value retrieved
		acour->asuiv = NULL;
		records++;
	}
	fclose(fp);
	printf("%d records lu depuis '%s'\n", records, file);
}

void save(char* file)
{
	int records;
	FILE* fp;

	// Open the file
	fp = fopen(file, "w");
	if (fp == NULL)
	{
		printf("Impossible de creer 's'\n", file);
		return;
	}

	// Write the records
	records = 0;
	acour = aprems;
	// If the list is empty, aprems == NULL and nothing is written
	while (acour)
	{
		fwrite(acour, sizeof(struct stypik), 1, fp);
		acour = acour->asuiv;
		records++;
	}

	fclose(fp);
	printf("%d records ecrit\n", records);
}
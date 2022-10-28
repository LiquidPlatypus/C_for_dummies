#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

int main()
{
	DIR* nomdoss;
	struct dirent* file;

	nomdoss = opendir(".");
	if(nomdoss == NULL)
	{
		puts("Lecture du dossier impossible.");
		exit(1);
	}
	file = readdir(nomdoss);
	printf("Nom du fichier ou dossier '%s'\n", file->d_name);
	closedir(nomdoss);
	
	return 0;
}
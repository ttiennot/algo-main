#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>

int main(int argn, int agvs)

{
	float notesEleve;
	int noteSuperieur10 = 0, i = 0, nbEleves;

	printf("Veuillez saisir le nombre d'�l�ves sans la classe! \n");

	scanf("%d", &nbEleves);

	while (i < nbEleves)
	{
		printf("\nVeuillez saisir la note de 1 �l�ve nom�ro %d\n", i + 1);
		scanf("%f", &notesEleve);

		if (notesEleve > 20 || notesEleve < 0)
		{
			printf("La saisie de note est stpp�e car la note que vous avez saisi est sup�rieur � 20 ou inf�rieur � 0!");
			break;
		}
		if (notesEleve > 10)
		{
			noteSuperieur10 += 1;
		}
		i++;
	}
	printf("Il  y a %d note sup�rieur � 10", noteSuperieur10);
}
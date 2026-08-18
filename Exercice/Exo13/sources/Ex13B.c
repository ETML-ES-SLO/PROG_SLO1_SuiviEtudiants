// Canevas Ex13B SL124_LOGA SLO1 2ème semestre
// Maj 26.01.2017 C. Huber


#include <stdio.h>

// type structure fourni
typedef struct {

} S_TroisNotes ;

typedef struct {

} S_AllNotes ;

// definition du type S_AllMoyennes



// Fonction CalculAllMoyennes



// Fonction CalculAllMoyTestB



// Programme principal
int main (void)
{
	char UserAnswer;
	// Variables pour test A
	S_AllNotes ValA = {
		{},
		{},
		{} };
	

	// Variables pour test B
	
	// Modification de la note 1 de l'élève B à 4.5

	// A adapter !!!
	printf("Ex13B Prenom NOM \n");

	do {
		printf("Test A ou B, Q pour Quitter \n");
		scanf_s("%c%*c", &UserAnswer, 2);
		
		switch (UserAnswer) {
			case 'A':
			case 'a':
				printf("TestA:  \n");
				// Appel de CalculAllMoyennes

				// Affichage des moyennes


			break;

			case 'B':
			case 'b':
				printf("TestB:  \n");
				// Appel de CalculAllMoyTestB
				
				// Affichage des moyennes
				
			break;

		} // end switch
	
	} while (!(UserAnswer == 'Q' || UserAnswer == 'q'));

	return (0);
}
//-----------------------------------------------------------------------------------//
// Nom du projet 		: EX_20_fichier
// Nom du fichier 		: EX_20_fichier
// Date de création 	: 23.03.26
// Date de modification : 23.03.26
//
// Auteur 				: Henri Mott
//                        Philou (Ph. Bovey)
//
// Version 				: 0.3
//
// Description          : Voir donnee exercice 4 
//
//
// Remarques :            lien pour la table ASCII :
// 						  -> http://www.asciitable.com/
// 						  
//----------------------------------------------------------------------------------//
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>  // pour manipulation de String

#include "interfaceUser.h"


// Programme principal
void gestionFichier(){

	FILE* pointer;
	char* endvalue = NULL;

	// put the values
	pointer = fopen("Trying.txt", "w");

	char Text1[40];
	char Text2[40];
	char Text3[40];
	fprintf(pointer, "Henri can't get his mind off\n");
	fprintf(pointer, "Exercise 20 Henri William Mott\n");
	fprintf(pointer, "numbers = %d\n", 23);
	fprintf(pointer, "numbers = %f\n", 521.13);

	fclose(pointer);

	//**************************************************

	printf("Read the file: \n");

	// read the values
	pointer = fopen("Trying.txt", "r");

	if (pointer == NULL)
	{
		printf("Error!\n");
		return 1;
	}
	printf("Successfull\n");

	while (!(pointer == EOF)) //ci pointeur retoure une chose
	{
		fscanf(pointer, "%s%s%s", Text1, Text2, Text3);
		printf("%s, %s, %s \n", Text1, Text2, Text3);
	}


	fclose(pointer); // fermeture du fichier
}
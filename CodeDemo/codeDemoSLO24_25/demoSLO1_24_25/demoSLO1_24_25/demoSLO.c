/*---------------------------------------------------------------------------------- -//
// Projet Name 			: demoSLO1_24_25
// File Name 			: demoSLO.c
// Creation Date 		: 19.09.2024
// Modification Date	: 21.11.2024
//
// Author 				: Philou (Ph. Bovey)
//
// Version				: 0.2
//
// Description          : demo pour les slos 1 
//						  1) calculer diff�rentes surfaces 
//
//
// Remarks				: lien pour la table ASCII :
// 						  -> http://www.asciitable.com/
// 						  lien pour la saisie de clavier avec getc & getchar pour ne pas
//                        avoir des erreurs d'interpr�tation
// 						  -> http://fr.openclassrooms.com/informatique/cours/utiliser-les-bonnes-fonctions-d-entree
// 						  lien vers diff�rents
// 						  -> http://fr.wikipedia.org/wiki/String.h
//----------------------------------------------------------------------------------*/
//-- CONSTANTE - WARNING � �vit� ici 
#define _USE_MATH_DEFINES				// pour utiliser certaines constante � red�finir 

//-- librairies standards --//
#include <math.h>						// pour les diff�rentes fonctions math�matique 

//-- appel de headerfile  -> vos fichier headerfile 
#include "fonctionsSLO.h"




//-- prototypes - WARNING � �vit� ici 


//-- variables globales - WARNING � �vit� 


//-- enum�ration globale --//
enum e_choixSurface { carre, rectangle = 6, triangle, cercle }; // 0 - 6 - 7 - 8
enum e_couleurCarrosserie { blanc, noir, rouge, bleu };



struct str_moteur 
{
	short piston; 
	double cylindre; 
	float turbo; 
};

// d�claration structure 
struct str_voiture
{
	int roue;
	enum e_couleurCarrosserie carroserie;
	char tb_modele[TAILLE_TB];
	str_moteurV2 moteur;
}; 




//-- d�claration de fonction 


/* ----------------------------------------------------------------------------------
// -> NOM FCT					:	main 
// -> PARAMETRES ENTRES			:	-
// -> PARAMETRE SORTIE			:   -
// -> PARAMETRE IN/OUT -> ptr	:   - 
// -> description				:	fonction principale -> d�but de programme 
 ----------------------------------------------------------------------------------*/
void main() 
{   
	//-- d�claration de variable --// 
	//-- type entier 
	enum e_choixSurface choixUser;	//-- WARNING : enum uniquement si enum�ration d�clar�e dans le source .c 

	e_surfaceChoice choixUser2;		//-- li� au typedef du headerFile; 

	int longueur_m = 100, largeur_m = 10, rayon = 1, index, indexe, valTb = 0; 
	int valeurX = 100, valeurY = 10; 


	// -- ATTENTION : Op�rateur & => cela indique la notion d'adresse 


	fonctionDemopt(valeurX, &valeurY); 


	//-- d�claration tableau --// 
	short tbSurface[6]; //  = { 0, 0, 0, 0, 0, 0 };

	// short tbSurface2[1000] = { 0 }; 

	char tbMulti[2][3] = { 0 }; 


	// utilisation structure 
	struct str_voiture voiture1, voiture2 = { 3, blanc, "bat", {12, 6, 1} }; 
	str_moteurV2 moteurBNJ = { 6, 3, 0 }; 

	Protocole_IP trameIP; 


	voiture1 = voiture2; 

	voiture1.roue = 4;
	voiture1.moteur = moteurBNJ; 

	printf("taille du protocole v1 %d [o] \n", sizeof(Protocole_IP));

	printf("taille du protocole v2 %d [o] \n", sizeof(Protocole_IP_V2));


	trameIP.Version = 2; 
	trameIP.Longueur_en_tete = 3; 

	printf("valeur de transfert : %x", trameIP.transfert); 

	trameIP.transfert = 0x71; 

	printf("valeur de version : %x \n", trameIP.Version);
	printf("valeur de LT : %x", trameIP.Longueur_en_tete);

	//-- version 1 
	for (index = 0; index < TAILLE_TB; index++)
	{
		if (index == 0)
			tbSurface[index] = 0; // �criture 
		else 
			tbSurface[index] = tbSurface[index - 1] + 2; // �criture et lecture 
	}

	//-- version KGR
	for (index = 0; index < TAILLE_TB; index++)
	{
		tbSurface[index] = valTb;
		valTb = valTb + 2;
	}

	//-- version BSH
	for (index = 0; index < TAILLE_TB; index++)
	{
		tbSurface[index] = index * 2; 
	}

	//-- version LCX 
	for (index = 0; index < TAILLE_TB; index++)
	{
		tbSurface[index] = index << 2;
	}

	//char tbMulti[2][3] = { 0 }; 
	// case = 1,2,3,4,5,6
	for (index = 0; index < TAILLE_LG ; index++)//boucle de Ligne
	{
		for (indexe = 0; indexe < TAILLE_CL; indexe++)//boucle de collone
		{
			tbMulti[index][indexe] = (index * 3) + indexe + 1;
		}
	}


	//-- type reel 
	float surfaceCarre_m2, surfaceRectangle_m2, surfaceTriangle_m2, surfaceCercle_m2; 



	//-- calculs surface --// 
	//-- carr� 
	surfaceCarre_m2 = longueur_m * longueur_m; 
	surfaceCarre_m2 = powf(longueur_m, 2); 

	//-- rectangle 
	surfaceRectangle_m2 = longueur_m * largeur_m;
	
	//-- triangle 
	surfaceTriangle_m2 = (longueur_m * largeur_m) / 2; 
	
	//-- cercle 
	surfaceCercle_m2 = M_PI * (rayon * rayon); 
	surfaceCercle_m2 = PI_2 * powf(rayon, 2); 

	//-- appel de fonction 
	slo(); 

	//appel de fonctio
	choixUser2 = DemonstrationSlo1(longueur_m, largeur_m, (double)surfaceCarre_m2);


 
}

//-- d�claration de fonction 
void ftc_test()
{

}



	




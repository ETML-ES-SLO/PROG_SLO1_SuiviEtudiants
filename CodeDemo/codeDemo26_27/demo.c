//-----------------------------------------------------------------------------------//
// Project Name 		: Demo25_26
// File name 			: demo.c
// Date de création 	: 29.09.2025
// Date de modification : 15.12.2025
//
// Auteur 				: Philou (Ph. Bovey)
//
// Version				: 1.3
//
// Description          : demo pour SLO1 25-26
//						  -> type 
//						  -> variable - tableau 
//						  -> condition - itération
//						  -> appel de fontion - utilisation lib perso + standard 
// 
// Remarques			: une constante numérique entière -> ex 10 prend 4 octets 
//						  une constante numérique réelle -> ex 3.14 prend 8 octets             
//----------------------------------------------------------------------------------//

//-- librairie standard --// 
	// lib pour les entrée - sortie (console - lecture clavier)
	// lib pour le entier normalisé 
	// lib pour le type bool 
	// pour la gestion des chaine de caractère

//-- librairie perso --//  


//-- définition --// 
#define ANNEES "25-26"
#define VERSION 1.1


//-- définition structure local par rapport au fichier --// 


//-- constante gloable --// 


//----------------------------------------------------------------------------------//
//-- nom fct : main
//-- paramètre entrée : -
//-- paramètre sortie : - 
//-- paramètre IN-OUT : - 
//-- description : programme principal =>
//----------------------------------------------------------------------------------//
void main()
{
	//-- constante --// 
	//-- reel 
	//-- à éviter -> si possible -> raison gestion mémoire 
	/*const float PI_v1 = 3.14;
	const float FOIX_2_2 = 2;*/

	//-- variables --//
	//--- Entier Standard 
	//--- Signé (+/-)
		// 1 octet
		// 2 octets 
		// 4 octets			
		// 8 octets 
	
	//-- tabeau entier de 1o
		// 10 octet

	//-- tableau entier de 2 octets 
	

	//--- Non signé (+) 
		// 1 octet
		// 2 octets 
		// 4 octets			
		// 8 octets 


	//--- Entier Notrmalisé -> librairie stdint.h 
		//--- Signé (+/-)
		// 1 octet
		// 2 octets 
		// 4 octets			
		// 8 octets 

	//--- Non signé (+) 
		// 1 octet
		// 2 octets 
		// 4 octets			
		// 8 octets 

	//-- type entier --//
			// 1 octet

	//--> info user 
	printf("Code demo - SLO - %s - %2.1f \n", ANNEES, VERSION);

	//--> message user -> info taille 
	printf("\n-> taille d'un booleen %d [o]", );
	printf("\n-> taille du tableau multidimension : %d [o]", );


	//--définition d'un type enumération -> e_machineEtat -> locale --// 
					  //ETAT1 = 0, ETAT2 = 20, ETAT3 = 21
	

	//-- utilisation d'une énumération globale -> e_FORME --// 
	

	//-- déclaration structure --// 
	//-- local //-- type //-- variable 
	


	// -- type		//-- variable 
	

								//led R, G, B, lum, nb



	// -- gestion union 
 

					  //MSB - LSB



	//-- lecture écriture --// 


	//-- passage par référence --//


	//-- MAJ de la variable enum


	//--- Reel 
	//-> taille 4 octets
 

	// cast implcite -> entier -> reel
        // _m => metre 

	//-> taille 8 octets 


	// -> pour tester 10 case -> soit < 10 ou <= 9
	// -> remplir un tableau en partant de la lettre 'A'


		// -> Ox41 correspond au 'A'	(voir table ASCII) 

		
		// -> affichage de chaque caractère 


	// -> exemple de récuperation d'une valeur d'un tableau 


	// -> exemple d'un 



	//-- une imstruction  est composé d'opérandes (variable) et d'opérateur (signe) --//
	//-- cast => (type)variable 


	//-- attention au cast implicite


	//-- appel de fct 
	//--> calcul perimetre ccercle 


	//--> calcul d'une moyenne


	//-> message user 
 
	
	//--> perimètre 


	//--> moyenne


	//-- condition -> expression


	//-- condition prioritaire 
	

		//-- condition secondaire 
		//

	

	//-- machine état --//

		//-- instruction 1... 
		//-- instruction 2... 
		

	
		//-- instruction 1... 
		//-- instruction 2... 




	//-- itération  --// 

	//--> 1 contion  -> 2 execution si vrai 
	//-- boucle infinie 
	



	//-- au minium une fois dans la boucle


			
	//-- pour les compteur --> connait le nombre d'itération
	//-- boucle à l'infini --// 
	


	//->1) initialisation plusieurs variables 2) condition 3) 
	
}





















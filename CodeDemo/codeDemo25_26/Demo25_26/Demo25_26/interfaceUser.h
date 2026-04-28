// ---------------------------------------------------------------------------------//
// Nom du projet 		: Demo25_26
// Nom du fichier 		: interfaceUser.h
// Date de création 	: 08.12.2025
// Date de modification : xx.xx.2025
//
// Auteur 				: Philou (Ph. Bovey)
//
// Version				: 0.1
//
// Description          : demo pour SLO1 25-26
//
// Remarques			: 
//----------------------------------------------------------------------------------//

#ifndef INTERFACE_USER_H
#define INTERFACE_USER_H


//-- structure gloabale --//
typedef struct
{
	int gain; 
	double Vbe; 
	short courant[2];   
}str_transistor;


typedef struct
{
	char bit1 : 1; //; 
	char bit2; //: 2; 
	char bits  : 5;
	float f ; 

}str_champsbits;


typedef struct
{
	char version : 4;				//LSB
	char longueurEntete : 4; 
	char typeService; 
	short longeurTotal;				//MSB
}str_enteteEthernet;

typedef union
{
	str_enteteEthernet decodageTrame; 
	unsigned int trame; 
}u_ethernet;





//-- prototypes --// 
void DemoAffichage(); 


void DemoStruct(str_transistor *tansistor); 


void gestionFichier(); 



#endif // !INTERFACE_USER_H


#include "liste.h"
#define INDICE 11
int main(){
								char c = 'a';
								listeChainee code;
								int i; //compteur;
								Element* ptr = code.debut;
								initialiser(&code);
								for(i = 0 ; i <= INDICE; i++){
									ajouter(&code, c);
									c++;
								}
								afficherCarac(&code);
								printf("valeur premier : %c\n", code.debut->valeur);
								printf("valeur pointeur : %c\n", ptr->valeur);
}

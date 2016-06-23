#include "liste.h"
#define INDICE 11
int main(){
								char c = 'a';
								listeChainee code;
								int i; //compteur;

								Element* ptr = code.debut;
								initialiser(&code);
								for(i = 0; i <= 10; i++) {
																ajouter(&code, c);
								}
								while(code.fin->valeur != 'z') {
																ptr->valeur++;
																afficherDF(&code);
																if(ptr->valeur = 'z') {
																								ptr = ptr->suivant;
																}
								}
}

#include "liste.h"
#define INDICE 11
int main(){
								char c = 'a';
								listeChainee code;
								int i; //compteur;
								initialiser(&code);
								for(i = 0 ; i <= INDICE; i++){
									ajouter(&code, c);
									c++;
								}
								Element* ptr = code.debut;
								while(code.fin->valeur != 'z'){
									afficherDF(&code);
									if(ptr->valeur == 'z'){
										ptr = ptr->suivant;
									}
									ptr->valeur++;
									printf("\n");
								}
}

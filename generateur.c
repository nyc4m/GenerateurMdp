#include "liste.h"
#define INDICE 11
int main(){
								listeChainee code;
								int i;
								Element* ch = malloc(sizeof(*ch));
								ch->valeur = 'a';
								ch->suivant = NULL;
								initialiser(&code);
								for(i = 0; i <= 10; i++) {
																ajouter(&code, ch->valeur);
																ch = obtenirElement(&code, 0);
																ch->valeur++;
								}
								afficherDF(&code);
								printf("\n");
								afficherFD(&code);
								printf("\n");
}

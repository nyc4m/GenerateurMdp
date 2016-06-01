#include "liste.h"
#define INDICE 11
int main(){
								listeChainee code;
								int i;
								char c = 'a';
								Element *ch = 0;
								initialiser(&code);
								for(i = 0; i <= 10; i++) {
																ajouter(&code, c);
																c++;
								}
								printf("Chaine : ");
								afficher(&code);
								ch = obtenirElement(&code, INDICE);
								ch->valeur = 'B';
								printf("\nElement a l'index %d = %c\n", INDICE, ch->valeur);
								printf("taille : %d\n", taille(&code));
}

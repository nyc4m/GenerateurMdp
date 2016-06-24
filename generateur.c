#include "liste.h"
#include "generateur.h"
#define INDICE 11
#define ITERATION 200
int main(){
								char c = 'a';
								listeChainee code;
								int i; //compteur;
								initialiser(&code);
								ajouter(&code, 'a');
								Element* ptr = code.debut;
								for(i = 0; i <= ITERATION; i++) {
																afficherDF(&code);
																printf("\n");
																ptr->valeur++;
																if(ptr->valeur == 'z') {
																								afficherDF(&code);
																								printf("\n");
																								traiter(&code, &ptr);
																}
								}
}

void traiter(listeChainee* liste, Element** e){
								if((*e)->suivant == NULL) {
																ajouter(liste, 'a');
																while((*e)->precedent != NULL) {
																								(*e)->valeur-=25;
																								(*e)=(*e)->precedent;
																}
								}else{
																*e = (*e)->suivant;
								}
}

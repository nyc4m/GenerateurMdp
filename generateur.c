#include "liste.h"
#include "generateur.h"
#define INDICE 11
int main(){
								char c = 'a';
								listeChainee code;
								int i; //compteur;
								initialiser(&code);
								ajouter(&code, 'a');
								Element* ptr = code.debut;
								for(i = 0; i <= 100; i++) {
																afficherDF(&code);
																printf("\n");
																ptr->valeur++;
																if(ptr->valeur == 'z') {
																	afficherDF(&code);
																	printf("\n");
																	traiter(&code, ptr);
																}
								}
}

void traiter(listeChainee* liste, Element* e){
	if(e->suivant == NULL)	{
			ajouter(liste, 'a');
			e->valeur-=25;
	}else{
		e = e->suivant;
	}
}

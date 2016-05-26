#include "liste.h"
int main(){
	listeChainee code;
	initialiser(&code);
	char lettre = 'a';
	//modifier(&code, 0, 'b');
	//code.debut.valeur = 'k';
	int i;
	for(i = 0; i < 26; i++){
		ajouter(&code, lettre);
		lettre++;
	}
	supprimerElement(&code, 5);
	ajouterIndex(&code, 5, 'e');
	afficher(&code);
	printf("%d\n", taille(&code)); 
	return 0;	
}

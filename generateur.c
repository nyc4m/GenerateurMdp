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
	vider(&code);
	afficher(&code);
	printf("%d\n", taille(&code)); 
	return 0;	
}

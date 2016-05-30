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
	//modifier(&code, 0, 'o');
	//modifier(&code, 26, 'R');
	supprimerElement(&code, 0);
	supprimerElement(&code, 25);
	printf("Premier caractere : %c\n", code.debut->valeur);
	printf("Dernier Caractère : %c\n", code.fin->valeur);
	printf("taille : %d\n", taille(&code));
	afficher(&code);
	vider(&code);
	return 0;
}

#include "liste.h"
#include <stdlib.h>

void ajouterPremierElement(listeChainee* liste, char a){
        Element* element = malloc(sizeof(*element));
        element->valeur = a;
        element->suivant = NULL;
        liste->debut = element;
        liste->fin = element;

}

void initialiser(listeChainee* liste){
        liste->debut = NULL;
        liste->fin = NULL;
}

void ajouter(listeChainee* liste, char a){
        if(estVide(liste) == 1) {
                ajouterPremierElement(liste, a);
        }else{
                //Le nouvel element est cree
                Element* element = malloc(sizeof(*element));
                element->valeur = a;
                element->suivant = NULL;

                //Le nouvel element devient le suivant du dernier
                liste->fin->suivant = element;
                //le nouvel element devient le dernier element
                liste->fin = element;
        }
}

int estVide(listeChainee* liste){
        int res = 0;
        if(liste->debut == NULL) {
                res = 1;
        }
        return res;
}

void afficher(listeChainee* liste ){
        Element* ptr = NULL;
        ptr = liste->debut;
        while(ptr != NULL ) {
                printf("%c\n", ptr->valeur);
                ptr = ptr->suivant;
        }
}

   void modifier(listeChainee* liste, int index, char nouvelleVal){
        supprimerElement(liste, index);
				ajouterIndex(liste, index, nouvelleVal);
   }

int taille(listeChainee* liste){
        int compteur = 0;
        Element* pointeur = liste->debut;
        while(pointeur != NULL) {
                pointeur = pointeur->suivant;
                compteur++;
        }
        return compteur;
}

void vider(listeChainee* liste){
        int i;
        Element *ptr1 = liste->debut;
        Element *ptr2 = liste->debut;
        while(ptr1 != NULL) {
                ptr1 = ptr1->suivant;
                ptr2->suivant = NULL;
                free(ptr2);
                ptr2 = ptr1;
        }
}

void supprimerElement(listeChainee* liste, int index){
        Element *ptr = liste->debut;
        int i;
        for(i = 0; i < index-2; i++) {
                ptr = ptr->suivant;
        }
        ptr->suivant = ptr->suivant->suivant;


}

void ajouterIndex(listeChainee *liste, int index, char valeur){
        if(index == taille(liste)) {
                ajouter(liste, valeur);
        }else if(index == 0){
					   		Element *element = malloc(sizeof(*element));
								element->valeur = valeur;
								element->suivant = liste->debut;
								liste->debut = element;
				}else{
                Element *ptr = liste->debut;
                int i;
                for(i = 0; i <index-1; i++) {
                        ptr = ptr->suivant;
                }
                Element *element = malloc(sizeof(*element));
                element->valeur = valeur;
                element->suivant = ptr->suivant;
                ptr->suivant = element;
        }
}

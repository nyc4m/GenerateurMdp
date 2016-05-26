#ifndef LISTE
#define LISTE
#include "element.h"
#include <stdio.h>
typedef struct listeChainee listeChainee;
struct listeChainee{
	Element* debut;
	Element* fin;
};

void ajouter(listeChainee* liste, char a);
void initialiser(listeChainee* liste);
int estVide(listeChainee* liste);
void ajouterDebut(listeChainee* liste, char a);
void afficher(listeChainee* liste);
void modifier(listeChainee* liste, int index, char nouvelleValeur);
int taille(listeChainee* liste);
void vider(listeChainee* liste);
void supprimerElement(listeChainee* liste, int index);
#endif

#ifndef ELEMENT
#define ELEMENT
typedef struct Element Element;
struct Element{
	char valeur;
	Element* suivant;
};
#endif

#include <stdio.h>
#include <stdlib.h>
#include "primitivesPile.h"


//init pile
void initpile(pile *p){
*p=NULL;
};
//empiler
void empiler(pile *p,Telm x){
pile V;
V = malloc(sizeof(CelluleP));
V->val = x;
V->suiv = *p;
*p=V;

};
//dpiler
void depiler(pile *p,Telm *x){
pile V;
*x =(*p)->val;
V = *p;
*p=(*p)->suiv;
free(V);

};
//pile vide
int pilevide(pile p){
if(p==NULL)return 1;
else return 0;
}
//sommet
Telm sommerPile(pile p){
return p->val;}


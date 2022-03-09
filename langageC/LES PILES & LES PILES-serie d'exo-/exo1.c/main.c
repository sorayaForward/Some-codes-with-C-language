#include <stdio.h>
#include <stdlib.h>
#include "primitivesPile.h"


//exo1
//AFFICHAGE
void affichePile(pile *p){
pile *R;
R = malloc(sizeof(CelluleP));
initpile(R);
Telm *x;
x = malloc(sizeof(int));
if(pilevide(*p)){printf(">la pile est vide");}
while(!pilevide(*p)){

    depiler(p,x);
    empiler(R,*x);

};
while(!pilevide(*R)){

    depiler(R,x);
    printf("\n\n\t%d \t\n",*x);
    empiler(p,*x);

};

};

//Occurance de val
int occurance(pile *p,Telm *val){
pile *R;
R = malloc(sizeof(CelluleP));
initpile(R);
Telm *x;
x = malloc(sizeof(int));
int occuu = 0;
if(pilevide(*p)){printf(">la pile est vide");}
while(!pilevide(*p)){

    depiler(p,x);
    if(x == *val) occuu++;
    empiler(R,*x);

};
while(!pilevide(*R)){

    depiler(R,x);
    printf("\n\n\t%d \t\n",*x);
    empiler(p,*x);

};

return occuu;
};

int main()
{

pile *maPile;
int i,e,v;
maPile = malloc(sizeof(CelluleP));
initpile(maPile);
printf(">Combient d'elements voulez vs empiler ?");
scanf("%d",&e);
for(i=0;i<e;i++){
    printf(">Donner le %d element ",i+1);
    scanf("%d",&v);
    empiler(maPile,v);
};
printf(">Affichage de la pile");
affichePile(maPile);


    return 0;
}

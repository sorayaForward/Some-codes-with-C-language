#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define size 3

//CAS CONTIGUE
//creation pile ( c un enregistrement qui contient un tableau + sommet de la pile )
typedef struct pile pile;
struct pile{int T[size];
int sommet;
};
typedef struct depil depil;//this is a solution to make aa function that returns two results with different data-types
struct depil{int x;
pile p;
};

//Les primitives de la pile
//1- init pile ~O(1)
pile init_pile(pile p){
p.sommet=-1;
return p;
}


//2- Empiler ~O(1)
pile empiler(pile p,int x){
if (p.sommet >= size - 1){printf("> La pile est pleine!");}
p.sommet++;
p.T[p.sommet]=x;
return p;
}
//3- depiler elle retourne un enregistrement ( la pile + le sommet de pile )
depil depiler(pile p,int x){
depil res;
if (p.sommet == -1){printf("> La pile est vide!");}
res.x=p.T[p.sommet];
p.sommet--;
res.p=p;
return res;
}

//4- sommet pile ~O(1)
int sommet_pile(pile p){
return p.T[p.sommet];
}

//5- pile vide ~O(1)
int pile_vide(pile p){
    if(p.sommet==-1){return 1;}else{ return 0;};
};

//5- pile pleine ~O(1)
int pile_pleine(pile p){
if(p.sommet+1==size){return 1;}else{ return 0;};
}

//6- Affichage
void affichage(pile p){
int x = 0;
pile R;
depil res,r;
R = init_pile(R);

 if (p.sommet == -1)
     {
       printf("\n> La pile est vide!");
     }
      else{
while(!pile_vide(p)){
    res = depiler(p,x);
    R = empiler(R,res.x);
    p.sommet--;
};
while(!pile_vide(R)){
    r = depiler(R,x);
    printf("\n%d",r.x);
    p = empiler(p,r.x);
    R.sommet--;

};

};
}


int main()
{


pile maPile;
depil res;
int x,v,i,choise,re,z=1;
again:
maPile = init_pile(maPile);
//goto label; used to jump into label in case the value entered is out of range
    repeat:
    printf("Donner la taille de la pile a cree max = %d : ",size);
    scanf("%d",&x);
    if(x>size || x<0){goto repeat;}
    do{
    printf("\n\t PILE OPERATIONS AVEC TABLEAU ");
    printf("\n\t--------------------------------");
    printf("\n\t 1.Empiler\n\t 2.Depiler\n\t 3.Afficher\n\t 4.Consultez l'etat de la pile\n\t 5.initialisez la pile\n\t 6.Quittez\n");
    scanf("%d",&choise);
    switch(choise){
    case 1 :i=0;
    if(!pile_pleine(maPile)){
    while(i<x){
    printf("\ndonner la val %d : ",z++);
    scanf("%d",&v);
    maPile = empiler(maPile,v);i++;};}else{goto here;}
    break;
    case 2 :
    Repeat:
    printf("\nCombien de valeurs voulez vs depiler ? max = %d : ",size);
    scanf("%d",&x);
    if(x>size){goto Repeat;}else{if(x==size) z=1;}
    for(i=0;i<x;i++){
    res = depiler(maPile,v);
    maPile = res.p;};
    break;
    case 3 :
    printf("\nAffichage de la pile");
    affichage(maPile); break;

    case 4 :here:if(pile_pleine(maPile)){printf("\n> La pile est pleine");}else{printf("\n> La pile est vide");};break;
    case 5 :z=1;goto again;break;
    case 6 :exit(0);break;
    default :{printf("\n> Svp saisissez un nombre valide(1/2/3/4/5)");}
     }
repeaT:
printf("\nAnother one ? yes(1) / no(0) : ");
scanf("%d",&re);
if(re!=1 && re!=0){goto repeaT;};
}while(re == 1);
    return 0;
}

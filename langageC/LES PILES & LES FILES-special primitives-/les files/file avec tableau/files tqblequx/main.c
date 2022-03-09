#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define size 4

//creation file ( c un enregistrement qui contient un tableau + sommet de la pile )
typedef struct file file;
struct file{int T[size];
int tete,queue;
};
typedef struct defil defil;//this is a solution to make aa function that returns two results with different data-types
struct defil{int x;
file f;
};

//Les primitives de la pile
//1- init file ~O(1)
file init_file(file f){
f.tete=size-1;f.queue=size-1; //tete ne bouge pas
return f;
}


//4- tete file ~O(1)
int tete_file(file f){
return f.T[(f.tete+1)%size];
}

//5- file vide ~O(1)
int file_vide(file f){
    if(f.tete==f.queue){return 1;}else{ return 0;};
};

//5- pile pleine ~O(1)
int file_pleine(file f){
if(f.tete==(f.queue+1)% size){return 1;}else{ return 0;};
}


//2- Enfiler ~O(1)
file enfiler(file f,int x){
if (file_pleine(f)){printf("> La file est pleine!");}
f.queue=(f.queue+1)%size;
f.T[f.queue]=x;
return f;
}
//3- defiler elle retourne un enregistrement ( la pile + le sommet de pile )
defil defiler(file f,int x){
defil res;
if (file_vide(f))printf("> La file est vide!");
f.tete=(f.tete+1)%size;
res.x=f.T[f.tete];
res.f=f;
return res;
}


//6- Affichage
void affichage(file f){
int x = 0;
defil res,r;
 if(file_vide(f))printf("\n> La file est vide!");
    else{
while(!file_vide(f)){
    res = defiler(f,x);
    printf("%d",res.x);
    f.queue=(f.queue-1)%size ;
};


};
}


int main()
{


file maFile;
defil res;
int x,v,i,choise,re,z=1;
again:
maFile = init_file(maFile);
//goto label; used to jump into label in case the value entered is out of range
    repeat:
    printf("Donner la taille de la pile a cree max = %d : ",size);
    scanf("%d",&x);
    if(x>size || x<0)goto repeat;
    do{
    printf("\n\t FILE OPERATIONS AVEC TABLEAU ");
    printf("\n\t--------------------------------");
    printf("\n\t 1.Emfiler\n\t 2.Defiler\n\t 3.Afficher\n\t 4.Consultez l'etat de la file\n\t 5.initialisez la file\n\t 6.Quittez\n");
    scanf("%d",&choise);
    switch(choise){
    case 1 :i=0;
    if(!file_pleine(maFile)){
    while(i<x){
    printf("\ndonner la val %d : ",z++);
    scanf("%d",&v);
    maFile = enfiler(maFile,v);i++;};}else{goto here;}
    break;
    case 2 :
    Repeat:
    printf("\nCombien de valeurs voulez vs depiler ? max = %d : ",size);
    scanf("%d",&x);
    if(x>size){goto Repeat;}else{if(x==size) z=1;}
    for(i=0;i<x;i++){
    res = defiler(maFile,v);
    maFile = res.f;};
    break;
    case 3 :
    printf("\nAffichage de la pile");
    affichage(maFile);
    break;
    case 4 :here:if(file_pleine(maFile)){printf("\n> La pile est pleine");}else{printf("\n> La pile est vide");};break;
    case 5 :z=1;goto again;break;
    case 6 :exit(0);break;
    default :{printf("\n> Svp saisissez un nombre valide(1/2/3/4/5)");}
     }
repeaT:
printf("\nAnother one ? yes(1) / no(0) : ");
scanf("%d",&re);
if(re!=1 && re!=0)goto repeaT;
}while(re == 1);


    return 0;
}









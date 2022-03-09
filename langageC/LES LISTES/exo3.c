#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


//creation des deux listes

typedef struct eliste eliste;
 struct eliste{int val;
 eliste *suiv;

};

//CREATION LIFO
eliste *creation(int n){
eliste *tete = NULL;
eliste *p;


int i,E;

for(i=1;i<=n;i++){

printf("donner le %d eme element : \n",i);
scanf("%d",&E);
p=malloc(sizeof(eliste));
p->val=E;
p->suiv=tete;
tete=p;}

return tete;
};
void affichage(eliste *tete){

eliste *p;
if(tete!=NULL){
p=tete;
}else{printf("la liste est vide");exit(0);};

while(p!= NULL){
  printf("\t%d->",p->val);
    p=p->suiv;

};


}
void similaire(eliste *tete1,eliste *tete2){
bool trouv = true;
int nbr1,nbr2,s2;
eliste *p1,*p2,*s1;


s1=tete1;
while(trouv == true && s1!=NULL){
nbr1=1;p1=tete1;
while(p1!=NULL ){
if(s1==p1){p1=p1->suiv;};
    if(s1->val==p1->val){nbr1++;};
    p1=p1->suiv;

};
nbr2=0;p2=tete2;

while(p2!=NULL){
    if(s1->val==p2->val){nbr2++;}
    p2=p2->suiv;

};
if(nbr1==nbr2){trouv = true;s1=s1->suiv;}else{printf("\n>Non similaires");trouv = false;};

};
if(trouv==true){printf("\n>Similaires");};
};

int main(){
    //[9,6,7,6,3,6,1,9] et [1,3,6,6,6,7,9,9] sont similaires
int n;
eliste *T1,*T2;
printf("-> donner le nombre d'elements a incerer \n");
scanf("%d",&n);
printf("Creation premiere liste \n");
T1=creation(n);
printf("Creation premiere liste \n");
T2=creation(n);
printf("\nAffichage premiere liste \n");
affichage(T1);
printf("\nAffichage deuxiemme liste \n");
affichage(T2);

similaire(T1,T2);
















    return 0;}

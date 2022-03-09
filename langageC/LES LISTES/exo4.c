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
tete=p;};

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


};

bool estPrefixe(eliste *tete1,eliste *tete2){
bool happy;
eliste *p1,*p2;
 p1=tete1;
 p2=tete2;
 happy=true;
if(p1!=NULL){
        while(p2!=NULL && p1!=NULL && happy==true){
         if(p1->val!=p2->val){
            happy=false;};

         p1=p1->suiv;p2=p2->val;

        };
if(p2==NULL && p1!=NULL){

    happy=false;
};
};

return happy;
};


int main(){


int n,g;
eliste *T1,*T2;
printf("-> donner le nombre d'elements a incerer pour la premiere liste L1\n");
scanf("%d",&n);
printf("Creation premiere liste \n");
T1=creation(n);
printf("-> donner le nombre d'elements a incerer pour la deuxiemme liste L2\n");
scanf("%d",&g);
printf("Creation premiere liste \n");
T2=creation(g);
printf("\nAffichage premiere liste \n");
affichage(T1);
printf("\nAffichage deuxiemme liste \n");
affichage(T2);
printf("\n%s",estPrefixe(T1,T2)? "true" : "false");




    return 0;}

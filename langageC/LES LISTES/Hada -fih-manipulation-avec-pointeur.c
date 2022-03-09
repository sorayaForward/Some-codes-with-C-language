
#include <stdio.h>
#include <stdlib.h>

//ki ndiro enregistrement avec * ensuite en declare une variable avec * c'est comme ona declarer un pointeur vers un pointeur
int main(){
int i;
int a = 9;//espace stocké dans le stack de la MC
int *p;//espace stocké dans le stack de la MC
printf("contenu de *p avant allocation %d\n",*p);
printf("adresse de *p avant allocation %p\n",&*p);

printf("contenu de p avant allocation %p\n",p);
printf("adresse de p avnt allocation %p\n",&p);
p=malloc(sizeof(int));//permet de cree un espace dans le heap de la MC
p=&a;
printf("contenu de p apres alocation ( il a generer une autre adresse )%p\n",p);
printf("contenu du *p apres alocation %d\n",*p);
printf("l'adresse du *p apres allocation %p\n",&*p);
printf("l'adresse de a apres allocation %p\n",&a);


p=malloc(sizeof(int));
//*p=13;
printf("contenu du p apres allocation sans liberation ( prend la meme adresse precedente ) %p\n",p);
printf("contenu du *p apres allocation sans liberation ( la premiere valeur a disparu ) %d\n",*p);
printf("l'adresse du *p apres allocation sans liberation %p\n",&*p);


//Tableau dynamiqye
printf("Tableau Dynamique 1\n");
p=malloc(4*sizeof(int));
printf("this is a gabrage value for P[0] %d\n",p[0]);
printf("this is a gabrage value for P[3] %d\n",p[3]);

*(p+0)=1;
*(p+1)=2;

for(i=0;i<4;i++){
    printf("L'adresse de la %d allocation est : %p\n",i+1,&*(p+i));
}
printf("Tableau Dynamique 2\n");

int *T;
printf("%p\n",T);
T=malloc(4*sizeof(int));
printf("contenu du pointeur du tableau %p\n",T);
for(i=0;i<4;i++){
    scanf("%d",(T+i));//ou &T[i]
    printf("L'adresse de la case %d %p\n",i+1,(T+i));// *(T+i) or T[i] pour afficher le contenu || (T+i) or &T[i] pour l'@ || T++ veut dire qui'il va pointer vers l'element suivant
}
printf("this is T[0] %d\n",T[0]);
free(T);//le nom d'un tableau represente l'@ de son premier element donc c un pointeur
printf("Apres le free de T %d \n",T);
T=malloc(4*sizeof(int));
printf("Apres le deuxiemme malloc il nous donne la meme adresse %d \n",T);

//Allocation dynamique avec une grand valeur peut nous donner le NULL donc on ecrit
//if(contenu du pointeur == NULL){
//    exit(0);
//}
//passage par valeur (int a,int b) a&b intouchable [copie] | par adresse (int *a,int*b)+dans l'appel nom(&a,&b)
//quand on parcourt une liste avec la tete tous le contenu est perdue + si le pointeur=NULL il va nous afficher 0
void test(eliste *tete){

while(tete!=NULL){

    tete=tete->suiv;
    printf("\n%d\n",tete->val);//or printf("%d\n",*tete);

};
printf("%d\n",tete->val);//or printf("%d\n",*tete);



};



return 0;}

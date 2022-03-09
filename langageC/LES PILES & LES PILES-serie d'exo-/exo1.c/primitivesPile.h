
typedef int Telm;
typedef struct EPile* pile;
typedef struct EPile{
Telm val;
pile suiv;
}CelluleP;

//init pile
void initpile(pile *p);

//empiler
void empiler(pile *p,Telm x);



//dpiler
void depiler(pile *p,Telm *x);


//pile vide
int pilevide(pile p);

//sommet
Telm sommerPile(pile p);


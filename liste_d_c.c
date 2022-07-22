#include "liste_d_c.h"


curseur creerCellule(char c) {

    curseur cel = (curseur)malloc(sizeof(cellule));
    if (cel != NULL) {

        cel->v = c;
        cel->celsuiv = NULL;
        cel->celprec = NULL;

    }
            return cel;


}

LDC creerListeDC() {

    LDC L = (LDC)malloc(sizeof(ListeDC));
    if(L != NULL) {

        L->taille = 0;
        L->CelEnTete = NULL;
        L->CelEnQueue = NULL;
        L->CelCle = NULL;
    }
    return L;
}

void

void suivant(LDC L) {
    if (L->CelCle != NULL)
        L->CelCle = L->CelCle->celsuiv;


}

void setQueue(LDC L){
    if(L->taille ==1)
        L->CelEnQueue = L->CelEnTete;
    while(L->CelCle->celsuiv)

}

void insererEntete(LDC L, char c) {
    curseur cel = creerCellule(c);
    L-> celEntete = cel;
    L->CelEnQueue = ....;
    L->celCle = cel;
    L->taille++;
    if (L->taille == 1)
        L->CelEnQueue = cel;

}

void insererApres(LDC L,char c) {
    curseur cel = creerCellule(c);
    cel->celsuiv = L->CelCle->celsuiv;
    cel->celsuiv = L->CelCle;
    L->CelCle = cel;
    L->taille++;
    setQueue(L);

}

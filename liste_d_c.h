#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef struct Cellule Cellule;
typedef Cellule *curseur;


typedef struct Cellule {

    char v;
    curseur celsuiv;
    curseur celprec;

};


typedef struct ListeDC ListeDC;
typedef ListeDC *LDC;

struct ListeDC{
    int taille;
    curseur CelEnTete;
    curseur CelEnQueue;
    curseur CelCle;
};

curseur creerCellule(char c);
LDC creerListeDC();
void insererEntete(LDC L,char c);
void insererApres(LDC L,char c);
void insererEnQueue(LDC L, char c);


curseur creerCellule(char c)




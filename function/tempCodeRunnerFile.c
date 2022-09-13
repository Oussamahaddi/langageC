#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <math.h>

/*
    Les fonctions ::
        -- Definition ::
            les fonctions ce sont des ensemble d'instructions regroupee sous un nom, elle prend les parametres
            et retourne un resultat, 
        
        -- Type des fonctions ::
            => void ::=>  ce type la sans retourn mais il peut prendre des parametres ou non;
            => int,float,char ::=>  ce type la avec retourne et peux prendre des arguments ou non mais
                                    il faut faire attention la parce que on mettre le type ca depend de type retourn
                                    par example si en mette dans retourne un nombre entier donc la il faut mette un
                                    type int;

        -- Syntax :: 
            1 -- void => pas retourn et pas arguments.
                ==> void nom_funct() {traitements};
            2 -- void => pas retourn et avec arguments.
                ==> void nom_funct(type var1,...) {traitement};
            3 -- type_retourn(int,char,float) => avec retourne et pas arguments
                ==> type_retourne nom_funct() {traitement; return resultat;};
            4 -- type_retourn(int,char,float) => avec retourne et pas arguments => 
                ==> type_retourne nom_funct(arg1,...) {traitement; return resultat;};

*/

int N;

void saiser() {

    printf("Entrer nombre N : ");
    scanf("%d", &N);

}

int multiple(long res) {
    int i;
    for (i = 1; i <= 10; i++) {
        res = N * i;
        printf("%d x %d = %ld \n",N, i, res);
    }

    return res;
}
//
//
//
//
//
//
//
//

// creer un fonction qui demmande a l'utilisateur type de dessin

int op;
int i, j;

void type() {

    printf("1 - rectangle \n");
    printf("2 - triangle \n");
    printf("3 - triangle vide \n");
    printf("4 - cadre vide \n");
    printf("Choiser le dessin que tu besoin : ");
    scanf("%d", &op);

}

// rectangle;

int rect(int L, int C) {

    printf("Entrer nombre de ligne L : ");
    scanf("%d", &L);
    printf("Entrer nombre de ligne C : ");
    scanf("%d", &C);

    for (i = 1; i <= L; i++) {
        for (j = 1; j <= C; j++) {
            printf("*  ");
        }
        printf("\n");
    }

    return L, C;
}

// triangle

int triangle(int n, int z) {

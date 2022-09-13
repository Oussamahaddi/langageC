#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <math.h>


/*
    Les Tableaux :: 
        1-- Definition ::
            un tableaux est un suite d'elements de meme type, il utilise plusieure cases memoire a l'aide d'un seul nom;
        
        2-- Syntax ::
            --- Declarer un tableaux =>  type_variables nom_tableaux[taile];
            --- Affecter un valeur =>  type_variables nom_tableaux[taile] = valeur;
            --- printf(nom_tableaux[taile]);
            --- scanf("% ", &nom_tableaux[taile]);
        
*/

int main() {

    // calcule la somme la moyenne le produit

    int i, j, k;

/*
    int T[10];
    float M, S, P;


    S = 0;
    P = 1;

    for (i = 0; i < 10; i++) {
        printf("T[%d] = ", i + 1);
        scanf("%d", &T[i]);
        S = S + T[i];
        P = P * T[i];
    }

    M = S / 10;

    printf("la Somme est : %.1f \n", S);
    printf("le produit est : %.1f \n", P);
    printf("la moyenne est : %.2f \n", M);


    // Afficher le minimum

    int mini, C = 0;
    int Ta[10];

    for (i = 0; i < 10; i++) {
        printf("T[%d] = ", i + 1);
        scanf("%d", &Ta[i]);
        if (Ta[i] < 0)
            mini = Ta[i];
    }

    printf("Le minimum dans ce tableau est : %d \n", mini);


    // Afficher le maximum

    int max, T[10];

    for (i = 0; i < 10; i++) {
        printf("T[%d] = ", i + 1);
        scanf("%d", &T[i]);
    }
    max = T[0];
    for (i = 0; i < 10; i++) {
        if (T[i] > max)
            max = T[i];
    }

    printf("Le maximum dans ce tableau est : %d \n", max);


    // cherche dans le tableau si n exciste ou non ?

    int T[10], n;
    int c = 1;

    for (i = 0; i < 10; i++) {
        printf("T[%d] = ", i + 1);
        scanf("%d", &T[i]);
    }
    printf("Enter numbre n : ");
    scanf("%d", &n);
    for (i = 0; i < 10; i++) {
        if (T[i] == n) 
            c = 0;
    }
    if (c = 0)
        printf("le nombre %d existe dans le tableau \n", n);
    else
        printf("le nombre %d n'existe \n", n);


    // calcule combien de fois un nombre a ete repeter

    int T[10];
    int n, r = 0;

    for (i = 0; i < 10; i++) {
        printf("T[%d] = ", i + 1);
        scanf("%d", &T[i]);
    }
    printf("Enter numbre n : ");
    scanf("%d", &n);
    for (i = 0; i < 10; i++) {
        if (n == T[i])
            r++;
    }
    printf("le nombre %d est repeter %d fois \n", n, r);


// reverse le tableau

    int j;
    int fT[5], sT[5];

    for (i = 0; i < 5; i++) {
        printf("fT[%d] = ", i + 1);
        scanf("%d", &fT[i]);
        sT[5 - i] = fT[i];
    }
    printf("Le reverse de premier tableau \n");
    for (i = 0; i < 5; i++) {
        printf("sT[%d] = %d \n", i + 1, sT[i + 1]);
    }


    ////////////////////////////// tri par selection

    // example ::

    int firstTable[5];
    int croissant;
    croissant = firstTable[0];      // on donne la variable la premier valeur dans le tableau pour le comparer avec les autres;
    for (i = 0; i < 5; i++) {       // saiser les valeur de la premier tableau;
        printf("fT[%d] = ", i + 1);
        scanf("%d", &firstTable[i]);
    }
    for (i = 0; i < 5; i++) {
        for (j = i + 1; j < 5; j++) {
            if (firstTable[i] < firstTable[j]) {   // comparer le premier index [0] avec le 2eme [1] si le 1ere est inferier a 2eme on le mette a la place pour le trier en ordre decroissant
                croissant = firstTable[i];
                firstTable[i] = firstTable[j];
                firstTable[j] = croissant;
            }
        }
    }
    printf("Order croissant \n");
    for (i = 0; i < 5; i++) {
        printf("sT[%d] = %d \n", i, firstTable[i]);
    }
*/
    



    // ajouter un nombre dans le tableau avec la pos

    int T[10];
    int N, pos, taille;
    
    printf("Enter la taille de tableau : ");
    scanf("%d", &taille);

    for (i = 0; i < taille; i++) {
        printf("T[%d] = ", i+1);
        scanf("%d", &T[i]);
    }

    printf("Enter numbre N : ");
    scanf("%d", &N);
    printf("Enter ca position : ");
    scanf("%d", &pos);

    if (pos <= 0 || pos > taille + 1)
        printf("Erreur il faut entrer la position entre 1 et %d \n", taille);
    else {
        for (i = taille ; i >= pos; i--) {
            T[i] = T[i - 1];
        }
        T[pos - 1] = N;
        taille++;
        for (i = 0; i < taille; i++) {
            printf("T[%d] = %d \n", i + 1, T[i]);
        }
    }





    return 0;
}
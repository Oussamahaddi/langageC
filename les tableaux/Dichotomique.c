#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <math.h>

void swap(int* x, int* y) {       // creer un fonction de swap
            int swp = *x;
            *x = *y;
            *y = swp;
    };

int main() {

    int i, j;
    int min, max, mid, cherche, taille;
    
    printf("Entrer la taille de tableau : ");
    scanf("%d", &taille);

    int Table[taille];

    for (i = 0; i < taille; i++) {        // saiser les valeur de tableau 
        printf("T[%d] = ", i + 1);
        scanf("%d", &Table[i]);
    }

    int n, p;

    printf("Entrer un nombre pour la positionner dans le tableau : ");
    scanf("%d", &n);
    printf("Entrer ca position : ");
    scanf("%d", &p);

    for (i = taille; i >= p; i--) {
        Table[i] = Table[i - 1];
    }
    Table[p - 1] = n;
    taille++;

    for (i = 0; i < taille; i++) {
        printf("T[%d] = %d \n", i + 1, Table[i]);
    }

    printf("----------- Tri par insertion -------------- \n");

    for (i = 1; i < taille; i++) {           // trier le tableau en ordre croissant
        j = i; 
        while (j > 0 && Table[j - 1] > Table[j]) {
            swap(&Table[j - 1], &Table[j]);         // Declarer la fonction de swap
            j--;
        }
    }

    for (i = 0; i < taille; i++) {
        printf("T[%d] = %d \n", i+1, Table[i]);
    }

    printf("Entrer le nombre que tu besoin : ");
    scanf("%d", &cherche);

    min = 0;
    max = taille;
    int cmp = 0;

    while (cmp > 0 && min <= max) {
        mid = (min + max) / 2;
        if (cherche == Table[mid])
            cmp++;
        else if (cherche < Table[mid])
            max = Table[mid] - 1;
        else
            min = Table[mid] - 1;
    }

    if (cmp != 0) {
        printf("%d ce trouve dans le tableau \n", cherche);
    } else {
        printf("ops ya pas dans le tableau \n");
    }





    return 0;
}
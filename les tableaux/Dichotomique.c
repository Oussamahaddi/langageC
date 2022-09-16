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

    // Recherch par Dichotomique

    int i, j;
    int min, max, mid, cherche, taille;
    min = 0;
    max = taille;
    
    printf("Entrer la taille de tableau : ");
    scanf("%d", &taille);

    int Table[taille];

    for (i = 0; i < taille; i++) {        // saiser les valeur de tableau 
        printf("T[%d] = ", i + 1);
        scanf("%d", &Table[i]);
    }

    printf("Tri par insertion \n");

    for (i = 1; i < taille; i++) {           // trier le tableau en ordre croissant
        j = i; 
        while (j > 0 && Table[j - 1] > Table[j]) {
            swap(&Table[j - 1], &Table[j]);
            j--;
        }
    }

    for (i = 0; i < taille; i++) {
        printf("T[%d] = %d \n", i+1, Table[i]);
    }

    printf("Entrer le nombre que tu besoin : ");
    scanf("%d", &cherche);

    int cmp = 0;
    min = 0;
    max = taille;
    while (cmp == 0 && min <= max) {        // recherche avec methode Dichotomique;
        mid = (min + max) / 2;
        if (cherche == Table[mid]) {
            cmp++;
        } else if (cherche < Table[mid]) {
            max = mid - 1;
            printf("%d \n",max);
        } else {
            min = mid + 1;
            printf("%d \n", min);
        }
    }

    if (cmp != 0) {
        printf("%d ce trouve dans le tableau \n", cherche);
    } else {
        printf("ops ya pas dans le tableau \n");
    }
    

    return 0;
}
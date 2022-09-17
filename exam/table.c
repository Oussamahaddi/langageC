#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>


int main() {

    int i, taille;
    int min, max;

    printf("Entrer la taille de tableau : ");      // demmande a l'utilisateur d'entree 
    scanf("%d", &taille);

    int T[taille];

    for (i = 0; i < taille; i++) {
        printf("T[%d] = ", i + 1);
        scanf("%d", &T[i]);
    }
    
    printf("Trier le tableau \n");

    for (i = 0; i < taille; i++) {     // tri le tableau par insertion
        int j = i;
        while (j > 0 && T[j - 1] > T[j]) {
            int tmp = T[j];
            T[j] = T[j - 1];
            T[j - 1] = tmp;
            j--;
        }
    }

    for (i = 0; i < taille; i++) {          // afficher le tableau trier
        printf("T[%d] = %d \n",i+1, T[i]);
    }

    int Smin, Smax;
    Smin = 0;
    Smax = 0;

    for (i = 1; i < taille; i++) {
        Smin = Smin + T[i];
    }
    for (i = taille; i > 0; i--) {
        Smax = Smax + T[i];
    }

    
    printf("La somme minimal est : %d \n", Smin);
    printf("La somme maximal est : %d \n", Smax);
    


    return 0;
}
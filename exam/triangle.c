#include <stdio.h>
#include <stdlib.h>

int main() {
/*
    int N, i, j, r, z, repet;

    printf("--------------- Design Triangle --------------- \n");
    printf("Entrer nombre N : ");
    scanf("%d", &N);
    printf("Enter how many time you want to repeat that : ");
    scanf("%d", &repet);

    for (r = 1; r <= repet; r++) {      // jai fait une bocle pour repeter nombre des triangles

        for (i = 1; i <= N; i++) {     // pour la 2eme bocle il repete que ce passe dans un line 

            for (z = i; z < N; z++) {      // cette boocle la pour creer un espace avant et le triangle
                printf(" ");
            }
            for (j = 1; j <= i; j++) {      // pour la dernier boocle c pour creer un etoile qui design le triangle avec espace apres 
                printf("* ");
            }

            printf("\n");     // lespace pour revien a la line a chaque fois quand on a fini la premier 
        }
    }
*/


    int i,j,k,r, n;

    printf("nombre : ");
    scanf("%d %d", &n, &r);


    for (int z = 1; z <= r; z++) {
        for (i = 0; i < n; i++) {
            for (k = n; k >= i; k--) {
                printf(" ");
            } 
            for (j = 1; j <= 2*i+1; j++) {
                printf("*");
            }
            printf("\n");
            n - i;
        }
        n++;
    }


    return 0;
}
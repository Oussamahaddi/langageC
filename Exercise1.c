#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <math.h>


int main() {

    float A , B;
    char op, P;


    // Normal calculatrice :: 

    do {
        printf("------------ Calculatrice ------------ \n");
        printf("Entrer nombre A : ");
        scanf("%f", &A);
        printf("Entrer l'operateur : ");
        scanf("%s", &op);
        printf("Entrer nombre B : ");
        scanf("%f", &B);

        switch (op) {
            case '+' :
                printf("A + B = %.2f \n", A + B);
                break;
            case '-' :
                printf("A - B = %.2f \n", A - B);
                break;
            case '*' :
                printf("A * B = %.2f \n", A * B);
                break;
            case '/' :
                if (B == 0) {
                    do {
                        printf("tu peux pas diviser pas 0 \n");
                        printf("Re entrer nomber B : ");
                        scanf("%f", &B);
                    } while (B == 0);
                    printf("A / B = %.2f \n", A / B);
                }
                break;
            default :
                printf("Sorry you didnt Enter the correct number \n");
                break;
        }

        printf("Tu veux quitter le programme (Y/N) : ");
        scanf("%s", &P);
    } while (P != 'Y');

    return 0;
}
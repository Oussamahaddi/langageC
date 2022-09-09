#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <math.h>


int main() {

    float A , B;
    char op, P;

    do {
        printf("------------ Calculatrise ------------ \n");
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
                printf("A / B = %.2f \n", A / B);
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
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <math.h>


int main() {


// calculatrice scientifique ::

    float A , B;
    int op;
    char P;
    double S, n, ta, co, si;
    float longeur, largeur, C;
    char T;

    do {
        printf("------------ Calculatrice Scientifique ------------ \n");
        printf("1 - power \n");
        printf("2 - square \n");
        printf("3 - trigonometrie \n");
        printf("choiser l'operation que tu veux : ");
        scanf("%d", &op);

        switch (op) {
            case 1 :
                printf("Enter nombre A : ");
                scanf("%f", &A);
                printf("Enter nombre B : ");
                scanf("%f", &B);
                printf("A ^ B = %.2f \n", pow(A, B));
                break;
            case 2 :
                printf("Enter nombre S : ");
                scanf("%lf", &S);
                printf("race(%.2lf) = %.2lf \n",S, sqrt(S));
                break;
            case 3 :
                printf("1 - rectangle \n");
                printf("2 - triangle \n");
                printf("3 - care \n");
                printf("4 - cos \n");
                printf("5 - sin \n");
                printf("6 - Tan \n");
                printf("Entrer le type de forma : ");
                scanf("%d", &op);
                switch (op) {
                    case 1 :
                        printf("Entrer longeur de rectangle : ");
                        scanf("%f", &longeur);
                        printf("Entrer largeur de rectangle : ");
                        scanf("%f", &largeur);
                        printf("La surface de rectangle est : %.2f \n", longeur * largeur);
                        break;
                    case 2 :
                        printf("Entrer longeur de triangle : ");
                        scanf("%f", &longeur);
                        printf("Entrer largeur de triangle : ");
                        scanf("%f", &largeur);
                        printf("La surface de triangle est : %.2f \n", (longeur * largeur) / 2);
                        break;
                    case 3 :
                        printf("Entrer la cote de caree : ");
                        scanf("%f", &C);
                        printf("La surface de care est : %.2f \n", pow(C, 2));
                        break;
                    case 4 :
                        printf("Enter numbre n : ");
                        scanf("%lf", &n);
                        printf("cos(%.2lf) = %.2lf \n", n, cos(n));
                        break;
                    case 5 :
                        printf("Enter numbre n : ");
                        scanf("%lf", &n);
                        printf("sin(%.2lf) = %.2lf \n", n, sin(n));
                        break;
                    case 6 :
                        printf("Enter numbre n : ");
                        scanf("%lf", &n);
                        printf("tan(%.2lf) = %.2lf \n", n, tan(n));
                        break;
                    default :
                        printf("You didnt enter the correct operation \n");
                        break;
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
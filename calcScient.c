#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <math.h>


int main() {


// calculatrice scientifique ::

    double A , B;
    int op;
    char stop;
    double S, n, ta, co, si;
    float longeur, largeur, C;

    int N, fac, i;

    do {
        printf("------------ Calculatrice Scientifique ------------ \n");
        printf("1 - power \n");
        printf("2 - square \n");
        printf("3 - Surface \n");
        printf("4 - factoriel \n");
        printf("5 - cos \n");
        printf("6 - sin \n");
        printf("7 - Tan \n");
        printf("choiser l'operation que tu veux : ");
        scanf("%d", &op);
        switch (op) {
            case 1 :
                printf("Enter nombre A : ");
                scanf("%lf", &A);
                printf("Enter nombre B : ");
                scanf("%lf", &B);
                printf("A ^ B = %.2lf \n", pow(A, B));
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
                    default :
                        printf("You didnt enter the correct operation \n");
                        break;
                }
                break;
            case 4 :
                int n, fac;
                printf("Entrer le nombre que tu veux facotier : ");
                scanf("%d", &n);
                fac = 1;
                for(int i=1; i <= n; i++){
                    fac = fac * i;
                };
                printf("la factoriel de %d est : %d \n",n , fac);
                break;  
            case 5 :
                printf("Enter numbre n : ");
                scanf("%lf", &n);
                printf("cos(%.2lf) = %.2lf \n", n, cos(n));
                break;
            case 6 :
                printf("Enter numbre n : ");
                scanf("%lf", &n);
                printf("sin(%.2lf) = %.2lf \n", n, sin(n));
                break;
            case 7 :
                printf("Enter numbre n : ");
                scanf("%lf", &n);
                printf("tan(%.2lf) = %.2lf \n", n, tan(n));
                break;
            default :
                printf("Sorry you didnt Enter the correct number \n");
                break;
        }

        printf("Tu veux quitter le programme (Y/N) : ");
        scanf("%s", &stop);
    } while (stop != 'Y');


    return 0;

}
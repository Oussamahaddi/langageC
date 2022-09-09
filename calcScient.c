#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <math.h>


int main() {


// calculatrice scientifique ::

    double A , B, Sq;
    int op;
    char stop;

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
                scanf("%lf", &Sq);
                printf("race(%.2lf) = %.2lf \n",Sq, sqrt(Sq));
                break;
            case 3 :
                printf("1 - rectangle \n");
                printf("2 - triangle \n");
                printf("3 - care \n");
                printf("4 - circle \n");
                printf("Enter type de forme que tu besoin : ");
                scanf("%d", &op);

                float longeur, largeur, Cote, r, surface;
                
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
                        scanf("%f", &Cote);
                        printf("La surface de care est : %.2f \n", pow(Cote, 2));
                        break;
                    case 4 :
                        printf("Entrer le rayon de circle : ");
                        scanf("%f", &r);
                        surface = (3.14 * pow(r, 2)) / 2;
                        printf("la surface de circle est : %.2f \n", surface);
                        break;
                    default :
                        printf("You didnt enter the correct operation \n");
                        break;
                }
                break;
            case 4 :
                int nombre, fac;
                printf("Entrer le nombre que tu veux facotier : ");
                scanf("%d", &nombre);
                fac = 1;
                for(int i=1; i <= nombre; i++){
                    fac = fac * i;
                };
                printf("la factoriel de %d est : %d \n",nombre , fac);
                break;  
            case 5 :
                double n, co;
                printf("Enter numbre n : ");
                scanf("%lf", &n);
                printf("cos(%.2lf) = %.2lf \n", n, cos(n));
                break;
            case 6 :
                double n2, si;
                printf("Enter numbre n : ");
                scanf("%lf", &n2);
                printf("sin(%.2lf) = %.2lf \n", n2, sin(n2));
                break;
            case 7 :
                double ta, n3;
                printf("Enter numbre n : ");
                scanf("%lf", &n3);
                printf("tan(%.2lf) = %.2lf \n", n3, tan(n3));
                break;
            default :
                printf("Sorry you didnt Enter the correct number \n");
                break;
        }

        printf("Tu veux quitter le programme (Y/N) : ");
        scanf("%s", &stop);
    } while (stop != 'Y');

    if (stop == 'Y') 
        printf("Good By \n");


    return 0;

}
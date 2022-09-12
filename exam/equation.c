#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <math.h>


int main() {

    float delta, a, b, c;
    float x, x1, x2;

    printf("Enter a, b, c : ");
    scanf("%f %f %f", &a, &b, &c);

    delta = pow(b, 2) - 4 * a * c ;

    if (delta < 0) {
        printf("pas de solution possible \n");
    } else if (delta == 0) {
        printf("l'equation a une solution \n");
        x = (-b) / 2 * a;
        printf("x = %.2f \n", x);
    } else {
        printf("l'equation accept 2 solution \n");
        x1 = (-b - sqrt(b)) / 2 * a;
        x2 = (-b + sqrt(b)) / 2 * a;
        printf("x1 = %.2f \n", x1);
        printf("x2 = %.2f \n", x2);
    }

    return 0;
}
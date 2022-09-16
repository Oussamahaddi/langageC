#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>

typedef struct {
    char name;
    int age;
}Personne;


int main() {

    int i, j, etudient;

    printf("Entrer combien des etudients : ");
    scanf("%d", &etudient);

    for (i = 1; i <= etudient; i++) {
        Personne p[i];
        printf("nome prenome : ");
        scanf("%s", &p[i].name);
        printf("Age : ");

    }



    return 0;
}

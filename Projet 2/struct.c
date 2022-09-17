#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>


typedef struct {
    int day;
    int month;
    int year;
}Naissance;

typedef struct {
    char *nom;
    char *prenom;
    int age; 
    Naissance Date;
}Personne;


int calc_Date_Naissance(int year, int month, int day) {
    int age;
    int CurrentYear, CurrentMonth, CurrentDay;
    CurrentYear = 2022;
    CurrentMonth = 9;
    CurrentDay = 20;

    age = CurrentYear - year;

    if (month < CurrentMonth) {
        age--;
    }
    else if (month == CurrentMonth) {
        if (day < CurrentDay) {
            age--;
        }
    }

    return age;
}

int main() {

    int i, j, student;

    printf("Entrer combien des etudients : ");
    scanf("%d", &student);
    
    Personne *P = calloc(student, sizeof(Personne));

    for (i = 1; i <= student; i++) {
        printf("Entrer l'information d'etudient %d \n", i);
        printf("nome : ");
        scanf("%s", &P[i].nom);
        printf("prenom : ");
        scanf("%s", &P[i].prenom);
        printf("year : ");
        scanf("%d", &P[i].Date.year);
        printf("month : ");
        scanf("%d", &P[i].Date.month);
        printf("day : ");
        scanf("%d", &P[i].Date.day);
        P[i].age = calc_Date_Naissance(P[i].Date.year,P[i].Date.month,P[i].Date.day);
    }

    printf("---------------------------------------- \n");
    Personne swp;
    for (i = 1; i <= student; i++) {
        for (j = i + 1; j <= student; j++) {
            if (P[i].age > P[j].age) {
                swp = P[i];
                P[i] = P[j];
                P[j] = swp;
            }
        }
    }

    for (i = 1; i <= student; i++) {
        printf("Information de student %d \n", i);
        printf("Nom : %s \n", &P[i].nom);
        printf("prenom : %s \n", &P[i].prenom);
        printf("age : %d \n", P[i].age);
    }


    return 0;
}

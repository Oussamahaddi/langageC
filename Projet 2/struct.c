#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>


typedef struct {        // struct qui contient la date de naissance 
    int day;
    int month;
    int year;
}Naissance;

typedef struct {        // struct qui contient les information d'etudients
    char *nom;
    char *prenom;
    int age; 
    Naissance Date;     // appel struct de Naissance interieur de struct qui contient les information d'etudient
}Personne;


int calc_Date_Naissance(int year, int month, int day) {     // creer un fonction qui calculer la date de naissance et return age exact
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
    
    Personne *P = calloc(student, sizeof(Personne));        // utilise allocation calloc pour saiser le chaine de caracter de nom et prenom sans fixer la taille de tableau

    for (i = 1; i <= student; i++) {        //  saiser les inforomation d'etudients
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
        P[i].age = calc_Date_Naissance(P[i].Date.year,P[i].Date.month,P[i].Date.day);       // return la valeur de l'age qui dans le struct Naissance apres le calcul dans la fonction et afficter a age
    }

    printf("---------------------------------------- \n");

    Personne swp;       // creer un object qui swap les etudient avec tous les information ;

    for (i = 1; i <= student; i++) {            // trier les etudient ce depend de son age
        for (j = i + 1; j <= student; j++) {
            if (P[i].age > P[j].age) {
                swp = P[i];
                P[i] = P[j];
                P[j] = swp;
            }
        }
    }

    for (i = 1; i <= student; i++) {            // affichage d'etudient apres le triage
        printf("Information de student %d \n", i);
        printf("Nom : %s \n", &P[i].nom);
        printf("prenom : %s \n", &P[i].prenom);
        printf("age : %d \n", P[i].age);
    }


    return 0;
}

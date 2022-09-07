#include <stdio.h>
#include <stdbool.h>


int main() {

    // Types of variables ::s

    //==============> Entier (int / long) <================

    int nome_variable;    // declartion 
    nome_variable = 18;    // initialization
    int yearOfGradtion = 2022;    // declartion and initialization

    int score = 100; // Integer (< 6)
    printf("my score is : %d\n" , score);
    long score2 = 781727184; // long (> 5)
    printf("My score is : %d \n", score2);




    //==============> caractere / chaine de caractere (char) <================

    char FirstNameLetter = 'R'; // single char
    char FullName[] = "Rabie"; // array of chars 

    printf("The first letter in my name is : %c \n", FirstNameLetter);
    printf("My full name is : %s\n", FullName);




    //=============> Reel (float) <================

    float FloatNumber = 3.03; // 6 to 7 digits 
    double DouleNumber = 7.0856444645600004; // up to 16 digits
    
    printf("My float number is : %f\n", FloatNumber);
    printf("My double number is : %lf\n", DouleNumber);




    //==============> Booleans (true / false) <================

    bool isTrue = true;
    printf("%d\n", isTrue);
    bool isFalse = false;
    printf("%d\n", isFalse);



    //==============> Les operateurs <================

    // 1 - Les operateurs arithmetique : +, -, *, /,%, Increment (++), Decrement (--)
    // 2 - Les operateurs relationnels :  Equal (==), Not Equal (!=), Structement superieur (>), Structement inferieur (<) , superieur ou equal (>=), inferieur ou equl (<=)
    // 3 - Les operateurs logique : Ou (||) , Et (&&)

    int grad, yearofbirth = 2004, year = 2022, prix = 70000, prix_annu;
    int a=10 ,b=4 ;
    int div, rest;

    grad = yearOfGradtion - yearofbirth;   //soustraction
    printf("My age when a graduted was : %d\n",grad);

    year = grad + yearofbirth;    //addition
    printf("The current year is : %d \n", year);

    prix_annu  = prix * 12;       //multiplication
    printf("Your annual salary is : %d\n",prix_annu);

    div = a / b ;     // divise le premier opérande par le second.
    printf("le resultat de la division est : %d \n",div);

    rest = a % b ;    // renvoie le reste lorsque le premier opérande est divisé par le second
    printf("le rest de la division est : %d",rest);




    //==============> Les Conditions (if/else ||  switch/case) <================

    int x = 10, y = 5, p = 20, n = 40;

    if (x >= y)    // verifie si X est stuctement superieur a Y si "oui" print le message si "non" on passe ou else
        printf(" X est structement superieur a Y \n");
    else 
        printf(" Y est structemtnt supererieur a X \n");
    
    
    if (x == y && p <= n)    // verifier si x egale Y ou "non" 'et(&&)' p inferieur ou egale n || dans ce cas il faut tous les condition doive etre vrai si nn on passe a condition suivant
        printf(" x est y sont egales \n");
    else if (x != y || p > n)    // verifie si x et y ne sont pas egale 'ou(||)' p structement inferieur a n || dans ce cas il faut au moin un condition doit etre vrai pour executer le code
        printf("x est y no sont pas egales \n");
    else printf("ooooopppppsssss \n");

    // switch / case

    char day = 'f';

    switch (day) {      // on utilise switch quand on es bien connu les valeurs
        case 'm' :
            printf("premier jour dans la semain \n");
            break;
        case 't' :
            printf("2eme jour dans la semain \n");
            break;
        case 'f' :
            printf("aujourd'hui cest le meilleur jour dans le Dieu \n");
            break;
        default :
            printf("les autres jours ne sont pas connu \n");
            break;
    }


    return 0;
};

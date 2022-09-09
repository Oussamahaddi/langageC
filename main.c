#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <math.h>


int main() {

    

//===========================> Les Variables <=======================================

    // Types of variables ::

    //======> Entier (int / long) <======

    int nome_variable;    // declartion 
    nome_variable = 18;    // initialization
    int yearOfGradtion = 2022;    // declartion and initialization

    // quand on utilise int et long

    int score = 100; // Integer (< 6)
    printf("my score is : %d\n" , score);
    long score2 = 781727184; // long (> 5)
    printf("My score is : %d \n", score2);



    //======> Caractere / chaine de caractere (char) <======

    char FirstNameLetter = 'R'; // single char
    char FullName[] = "Rabie"; // array of chars 

    printf("The first letter in my name is : %c \n", FirstNameLetter);
    printf("My full name is : %s\n", FullName);




    //======> Reel (float) <======

    float FloatNumber = 3.03; // 6 to 7 digits 
    double DouleNumber = 7.0856444645600004; // up to 16 digits
    
    printf("My float number is : %f\n", FloatNumber);
    printf("My double number is : %lf\n", DouleNumber);




    //=======> Booleans (true / false) <=========

    bool isTrue = true;
    printf("%d\n", isTrue);   // true return toujour 1;

    bool isFalse = false;
    printf("%d\n", isFalse);   // false return 0;




//=============================> Les Operateurs (arithmetique / relationnels) <=======================================


    // 1 - Les operateurs arithmetique : +, -, *, /, %, Increment (++), Decrement (--)
    // 2 - Les operateurs relationnels :  Equal (==), Not Equal (!=), Structement superieur (>), Structement inferieur (<) , superieur ou equal (>=), inferieur ou equl (<=)
    // 3 - Les operateurs logique : Ou (||) , Et (&&)

    // Examples :

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




//===========================> Les Conditions (if/else ||  switch/case) <=======================================
        
    // if / else 
        // syntax ::
        /*
            if (condition) {
                statement 1;
                statement 2;
                ...
            } else {
                statement 1;
                ....
            }
        */

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
        // syntax ::
        /*
            int name_variable;
            nome_variable = value;
            switch (name_variable) {
                case 1 :
                    statement;
                    break;
                case 2 :
                    statement ;
                    break;
                .
                .
                .
                default :
                    statement;
                    break;
            }
        */

    char day;
    
    day = 'f';

    switch (day) {      // on utilise switch quand on es bien connu les valeurs et quand on a un seul variable
        case 'm' :
            printf("premier jour dans la semain \n");
            break;
        case 't' :
            printf("2eme jour dans la semain \n");
            break;
        case 'f' :
            printf("aujourd'hui cest le meilleur jour \n");
            break;
        default :
            printf("les autres jours ne sont pas connu \n");
            break;
    }


    //========> Example <=========

    int chose;
    float A, B;
    char k;

    do {
        printf("1 - Additionnel \n");
        printf("2 - Sustraction \n");
        printf("3 - Multiplication \n");
        printf("4 - Division \n");
        printf("choiser l'operation que tu veux : ");
        scanf("%d", &chose);

        switch (chose) {
            case 1 :
                printf("Enter number A : ");
                scanf("%f", &A);
                printf("Enter number B : ");
                scanf("%f", &B);
                printf("A + B = %.2f \n", A + B);
                break;
            case 2 :
                printf("Enter number A : ");
                scanf("%f", &A);
                printf("Enter number B : ");
                scanf("%f", &B);
                printf("A - B = %.2f \n", A - B);
                break;
            case 3 :
                printf("Enter number A : ");
                scanf("%f", &A);
                printf("Enter number B : ");
                scanf("%f", &B);
                printf("A * B = %.2f \n", A * B);
                break;
            case 4 :
                printf("Enter number A : ");
                scanf("%f", &A);
                printf("Enter number B : ");
                scanf("%f", &B);
                printf("A / B = %.2f \n", A / B);
                break;
            default :
                printf("Sorry you didnt Enter the correct number \n");
                break;
        }
        
        printf("Tu veux quiter le programe Y/N : ");
        scanf("%s", &k);
    } while (k != 'Y');



//===========================> Les Boucles (while || do / while || for) <=======================================

    //========> While <=========
        // Syntax ::
        /*
            int i = start;
            while (i <= end) {
                statement1 ....;
                i++;
            }
        */
    
    // Example ::

    int i = 1;
    while ( i <= 5) {
        printf("i = %d \n", i);
        i++;
    }

    //========> do / while <=========
    // Syntax ::
        /*
            do {
                statement1 ....;
            } while (condition);
        */
    
    int N;

    do {
        printf("Enter number N : ");
        scanf("%d", &N);
        printf("N = %d \n", N);

    } while (N <= 20);  // dans ce cas la boucle va s'execute tant que la condition est vrai

    //========> for (break / continue) <=========
    // Syntax ::
        /*
            int i;
            for (i = 1; condition; increment / decrement) {
                statement 1 .....
            }
        */

    // Example ::

    int r, count;
    count = 5;
    for (r = 0; r <= 5; r++) {
        printf("%d \n", count);
        count--;
    }

    // Example avance ::

    int number, c, res;

    printf("Enter random number : ");
    scanf("%d", &number);

    for (c = 1; c <= 10; c++) {
        res = number * c;
        printf("%d * %d = %d \n", number, c, res);
    }



    // Exercise ::

    int N, tentative;
    tentative = 5;

    srand(time(NULL));
    int random = rand() + 1;

    printf("-------------------- Game -------------------");

    do {
        printf("guess the number : ");
        scanf("%d", &N);
    } while (tentative > 5);

    if (tentative > 5) {
        printf("sorry tu as passer le nombre de tentative max ");
        printf("Le nomber et %d \n", random);
    } 

    


    return 0;
};
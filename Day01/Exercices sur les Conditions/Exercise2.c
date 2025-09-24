#include <stdio.h>

// Challenge 2 : Calcul de Prime d'Assurance Auto

// Écrivez un programme C pour calculer la prime d'assurance d'une voiture en fonction de :

//     Âge du conducteur (en années)
//     Type de voiture (1 pour sportive, 2 pour utilitaire, 3 pour familiale)
//     Nombre d'accidents au cours des 5 dernières années

// Les règles de calcul sont :

//     Conducteur de moins de 25 ans : Prime de base * 1.5
//     Conducteur de 25 à 65 ans : Prime de base
//     Conducteur de plus de 65 ans : Prime de base * 1.2
//     Type de voiture sportive : Prime * 2
//     Type de voiture utilitaire : Prime * 1.2
//     Type de voiture familiale : Prime * 1.1
//     Nombre d'accidents > 1 : Ajoutez 30% à la prime


int main(){

    int age,type_voiture,nbr_accid,prime = 500;
    printf("Entrez l'age :");
    scanf("%d",&age);
    printf("Entrez le type de voiture (1 -> pour sportive, 2 -> pour utilitiare, 3 -> pour familiale):");
    scanf("%d",&type_voiture);
    printf("Entrez le nombres d'accidnets:");
    scanf("%d",&nbr_accid);

    if (age < 25)
    {
        /* code */
        prime = prime * 1.5;
    }else if (age >= 25 || age <= 65)
    {
        /* code */
        prime = prime;
    }else if(age > 65)
    {
        /* code */
        prime = prime * 1.2;
    }else if (nbr_accid > 1)
    {
        /* code */
        prime = prime * 1.3;
    }
    




    switch (type_voiture)
    {
    case 1:
        /* code */
        prime = prime * 2;
        break;
    case 2:
        prime = prime * 1.2;
        break;
    case 3:
        prime = prime * 1.1;
        break;
    
    default:
        printf("Error...");
        break;
    }
    
    
    printf("le prime : %d",prime);





}
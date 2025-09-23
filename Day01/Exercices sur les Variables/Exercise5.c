#include <stdio.h>



// Challenge 5 : Affichage Température

// Écrivez un programme qui demande la température en Celsius et affiche l'état de l'eau à cette température (solide, liquide, gaz). Règle :

//     C < 0 : Solide
//     0 <= C < 100 : Liquide
//     C >= 100 : Gaz


int main(){
    
    printf("#### Affichage Temerature ####\n");

    float C;
    printf("Entrer la temperature en Celsius :");
    scanf("%f",&C);

    if (C < 0)
    {
        /* code */
        printf("Solide...");
    }else if (C >= 0 && C < 100)
    {
        /* code */
        printf("Liquide...");
    }else{
        printf("Gaz...");
    }
    
    

}
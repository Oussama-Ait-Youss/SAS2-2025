#include <stdio.h>
#include <string.h>

// Challenge 7 : Conversion en Majuscules
// Écrivez un programme C qui lit une chaîne de caractères
// et convertit tous les caractères en majuscules.
// Affichez la chaîne modifiée.




int main(){


    char string[10];

    printf("Entre a word :");
    scanf("%s",string);



    // convert to upper case
    for (int i = 0; i < strlen(string); i++)
    {
        /* code */
        if (string[i] >= 'a' && string[i] <= 'z')
        {
            /* code */
            string[i] = string[i] - 32;
        }
         
    }
    




    // affichage
    printf("retuls : %s",string);



}
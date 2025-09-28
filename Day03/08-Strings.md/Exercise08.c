#include <stdio.h>
#include <string.h>

// Challenge 8 : Conversion en Minuscules
// Écrivez un programme C qui lit une chaîne de caractères
// et convertit tous les caractères en minuscules. Affichez
// la chaîne modifiée.




int main(){


    char string[10];

    printf("Entre a word :");
    scanf("%s",string);



    // convert to upper case
    for (int i = 0; i < strlen(string); i++)
    {
        /* code */
        if (string[i] >= 'A' && string[i] <= 'Z')
        {
            /* code */
            string[i] = string[i] + 32;
        }
         
    }
    




    // affichage
    printf("retuls : %s",string);



}
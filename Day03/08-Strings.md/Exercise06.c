#include <stdio.h>
#include <string.h>

// Challenge 6 : Compte des Occurrences d'un Caractère
// Écrivez un programme C qui lit une chaîne de caractères
// et un caractère, puis compte et affiche combien de fois
// le caractère apparaît dans la chaîne.


int main(){

    char string[10],letter;
    int counter = 0;


    printf("Entre a word :");
    scanf("%s",string);
    printf("entre the letter to search for :");
    scanf(" %c",&letter);


    for (int i = 0; i < strlen(string); i++)
    {
        /* code */
        if (string[i] == letter)
        {
            /* code */
            counter++;
        }
        
    }
    // affichage
    printf("result : %d",counter);
    


}
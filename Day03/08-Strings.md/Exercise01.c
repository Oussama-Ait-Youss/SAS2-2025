#include <stdio.h>


// Challenge 1 : Affichage d'une Chaîne
// Écrivez un programme C qui lit une chaîne de caractères
// entrée par l'utilisateur et l'affiche à l'écran.



int main(){
    char string1[] = "hello world";

    //Affichage
    for (int i = 0; i < 11; i++)
    {
        // if (string1[i] == '\0')
        //     break;
        
        printf("%c",string1[i]);
    }
    

}
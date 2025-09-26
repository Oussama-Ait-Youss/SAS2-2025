#include <stdio.h>


// Challenge 2 : Longueur de la Chaîne
// Écrivez un programme C qui calcule et affiche
// la longueur d'une chaîne de caractères sans utiliser
// la fonction strlen().



int main(){

    char string[] = "hello world!!";


    int i = 0,longueur = 0;
    while(string[i] != '\0'){
        longueur++;
        i++;
    }

    printf("la longueur de '%s' est : %d",string,longueur);
    


}
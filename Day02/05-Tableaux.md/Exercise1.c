#include <stdio.h>

// Challenge 1 : Initialisation et Affichage
// Écrivez un programme C qui initialise un tableau
// d'entiers avec des valeurs données et affiche ces valeurs. Par exemple,
// vous pouvez initialiser un tableau avec les valeurs [1, 2, 3, 4, 5] et afficher chaque valeur sur une nouvelle ligne.


int main(){

    int T[10];
    

    //Initialisation
    for (int i = 0; i < 10; i++)
    {
        /* code */
        printf("Entrez le %d valeur :",i);
        scanf("%d",&T[i]);
    }

    //Affichage 
    for (int i = 0; i < 10; i++)
    {
        /* code */
        printf("%d\n",T[i]);
    }
    
    

}
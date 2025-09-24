#include <stdio.h>

// Challenge 2 : Saisie et Affichage des Éléments
// Écrivez un programme C qui demande à l'utilisateur le nombre
// d'éléments d'un tableau, puis demande à l'utilisateur de saisir ces éléments. Affichez ensuite les éléments du tableau.



int main(){

    int n;

    printf("Entrez le nombre d'elements :");
    scanf("%d",&n);
    int T[n];


    //initialisation
    for (int i = 0; i < n; i++)
    {
        /* code */
        printf("Entrez %d valeur :",i+1);
        scanf("%d",&T[i]);
    }
    
    //Affichage
    for (int i = 0; i < n; i++)
    {
        /* code */
        printf("%d\n",T[i]);
    }
    

}
#include <stdio.h>


// Challenge 3 : Somme des Éléments
// Écrivez un programme C qui calcule et affiche la somme des éléments
// d'un tableau d'entiers. Le programme doit demander le nombre d'éléments,
// puis les éléments du tableau, et afficher la somme totale.

int main(){
     int n,S = 0;

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
    
    //calcule la somme 
    for (int i = 0; i < n; i++)
    {
        /* code */
        S +=T[i];
    }
    printf("la Somme des elements est : %d",S);

}
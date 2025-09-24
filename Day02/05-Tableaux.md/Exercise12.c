#include <stdio.h>


// Challenge 12 : Afficher les Éléments Paire
// Écrivez un programme C qui affiche uniquement
// les éléments pairs d'un tableau d'entiers. Le programme
// doit demander le nombre d'éléments et les éléments du tableau.



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

    //Affichage les elements paire
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (T[i] % 2 == 0)
        {
            /* code */
            printf("%d",T[i]);
        }
        
    }
    



}
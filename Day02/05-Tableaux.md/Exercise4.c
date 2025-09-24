#include <stdio.h>


// Challenge 4 : Trouver le Maximum
// Écrivez un programme C qui trouve et affiche le plus grand élément dans un tableau
// d'entiers. Le programme doit demander le nombre d'éléments et les éléments du tableau.

int main(){
     int n,max;

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
    max = T[0];
    //Trouve la maximum
    for (int i = 1; i < n; i++)
    {
        /* code */
        if (T[i] > max)
        {
            /* code */
            max = T[i];
        }
        
        
    }
    printf("la valeur maximal  est : %d",max);

}
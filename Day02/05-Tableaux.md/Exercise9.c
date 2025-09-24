#include <stdio.h>


// Challenge 9 : Inversion d'un Tableau
// Écrivez un programme C qui inverse les éléments d'un tableau d'entiers. Par exemple
// si le tableau est [1, 2, 3, 4, 5], il doit devenir [5, 4, 3, 2, 1]. Affichez le tableau inversé.


int main(){

    int n,tmp;

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

    for (int i = 0; i < n/2; i++)
    {
        /* code */
        tmp = T[i];
        T[i] = T[n - i -1];
        T[n - i -1] = tmp;
    }

     //Affichage
    for (int i = 0; i < n; i++)
    {
        /* code */
        printf("%d\n",T[i]);
    }

    return 0;



}
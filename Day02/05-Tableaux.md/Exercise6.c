#include <stdio.h>
// Challenge 6 : Multiplication des Éléments
// Écrivez un programme C qui multiplie chaque élément d'un tableau d'entiers par
// un facteur donné et affiche le tableau résultant. Le programme doit demander
// le nombre d'éléments, les éléments du tableau, et le facteur de multiplication.


int main(){
     int n,fact;

    printf("Entrez le nombre d'elements :");
    scanf("%d",&n);
    printf("Entrez le facteur : ");
    scanf("%d",&fact);


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
        T[i] *= fact;
        printf("%d\n",T[i]);
    }
}
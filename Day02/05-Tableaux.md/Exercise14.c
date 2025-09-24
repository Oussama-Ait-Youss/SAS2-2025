#include <stdio.h>



// Challenge 14 : Calculer la Moyenne
// Écrivez un programme C qui calcule la moyenne des éléments
// d'un tableau d'entiers. Le programme doit demander le nombre
// d'éléments, les éléments du tableau, puis afficher la moyenne.




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

    //calcule moyenne
    for (int i = 0; i < n; i++)
    {
        /* code */
        S += T[i];

    }
    printf("le moyenne : %d  ",S/n);
    

}
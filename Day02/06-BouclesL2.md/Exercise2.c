#include <stdio.h>


// Challenge 2 : pyramide d'étoile

//       *
//      ***
//     *****
//    *******
//   *********
//  ***********
// *************

// Écrire le programme pour avoir un pyramide d'étoile,
// le nombre des lignes à composer est demandé à l’utilisateur.
// (chaque ligne doit avoir un nombre premier d'étoiles.




int main(){

    int n;
    printf("Entrez le nombre des lignes :");
    scanf("%d",&n);

    //affichage de pyramide d'etoile

    for (int i = 1; i <= n; i++)
    {
        /* code */
        for (int j = 1; j <= n - i; j++)
        {
            /* code */
            printf(" ");
        }
        
        for (int j = 1; j <= (2*i -1); j++)
        {
            /* code */
            printf("* ");
        }
        printf("\n");
        
        
    }
    



}
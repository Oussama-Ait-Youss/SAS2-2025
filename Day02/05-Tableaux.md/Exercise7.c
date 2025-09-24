#include <stdio.h>


// Challenge 7 : Tableau en Ordre Croissant
// Écrivez un programme C qui demande à l'utilisateur de saisir un tableau d'entiers,
// puis affiche le tableau trié en ordre croissant sans utiliser de fonction de tri prédéfinie.


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

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (T[j] > T[j + 1]) {
                // Échange
                tmp = T[j];
                T[j] = T[j + 1];
                T[j + 1] = tmp;
            }
        }
    }

     //Affichage
    for (int i = 0; i < n; i++)
    {
        /* code */
        printf("%d\n",T[i]);
    }
    


}
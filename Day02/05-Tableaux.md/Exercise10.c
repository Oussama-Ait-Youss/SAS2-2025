#include <stdio.h>

// Challenge 10 : Rechercher un Élément
// Écrivez un programme C qui recherche un élément spécifique dans un tableau d'entiers
// en utilisant une recherche linéaire. Le programme doit demander à l'utilisateur le nombre
// d'éléments, les éléments du tableau, et l'élément à rechercher, puis afficher si l'élément est présent ou non.



int main(){
    int n,founder = 0,element;

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
    printf("Entrez l'element pour la recherche :");
    scanf("%d",&element);
    // recherche
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (T[i] == element)
        {
            /* code */
            founder = 1;
            break;
        }
    }

    if (founder)
    {
        /* code */
        printf("l'element est present\n");
    }else{
        printf("non...");
    }
    
}
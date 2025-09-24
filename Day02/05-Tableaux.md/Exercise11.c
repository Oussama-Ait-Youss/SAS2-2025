#include <stdio.h>


// Challenge 11 : Remplacer un Élément
// Écrivez un programme C qui remplace toutes les occurrences d'une valeur
// spécifique dans un tableau d'entiers par une nouvelle valeur.
// Le programme doit demander à l'utilisateur le nombre d'éléments,
// les éléments du tableau, la valeur à remplacer, et la nouvelle valeur.



int main(){
    int n,old_element,new_element;
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
    printf("Entrez la valeur a remplacer  :");
    scanf("%d",&old_element);
    
    // recherche
    int founder = 0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (T[i] == old_element)
        {
            /* code */
            founder =1;
            break;
        }else if(T[i] != old_element){
            founder = 0;
        }
    }
    if (founder)
    {
        /* code */
        printf("la valeur exist...");
    }else{
        printf("la valeur n'exist pas...");
    }
    
    printf("\nEntrez la nouvelle valeur :");
    scanf("%d",&new_element);

    for (int i = 0; i < n; i++)
    {
        /* code */
        if (T[i] == old_element)
        {
            /* code */
            T[i] = new_element;
            break;
        }
    }

    //afichage
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        /* code */
        printf("%d",T[i]);
    }
    


}
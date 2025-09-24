#include <stdio.h>


// Challenge 3 : Somme de Deux Valeurs
// Écrivez un programme C pour calculer la somme de deux valeurs entières données.
// Si les deux valeurs sont identiques, le programme doit renvoyer le triple de leur somme.


int main(){

    int a,b;
    printf("Entrez les nombres :");
    scanf("%d %d",&a,&b);

    if (a == b)
    {
        /* code */
        printf("result : %d",(a + b) * 3);
    }else{
        printf("result : %d", a + b);
    }
    



}
#include <stdio.h>
#include <string.h>



// Challenge 3 : Passage de Structure en Argument
// Écrivez un programme C qui définit une structure pour représenter un rectangle avec les champs
// longueur et largeur. Écrivez une fonction qui prend une variable de cette structure en argument
// et calcule l'aire du rectangle. Affichez l'aire dans le programme principal.




// definition de la structure
struct Rectangle
{
    /* data */
    float longueur;
    float largeur;
};


float air_rectangle(struct Rectangle r){
    return r.longueur * r.largeur;
}
int main()
{

    struct Rectangle T;
    printf("entrez la longueur :");
    scanf("%f", &T.longueur);
    printf("entrez la largeur :");
    scanf("%f", &T.largeur);

    printf("l'aire du rectangle est : %.2f", air_rectangle(T));
    return 0;
        
}
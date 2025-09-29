#include <stdio.h>
#include <string.h>



// Challenge 5 : Structure et Fonction de Retour
// Écrivez un programme C qui définit une structure pour représenter un livre avec les champs
// titre, auteur, et année. Écrivez une fonction qui retourne une variable de cette structure initialisée
// avec des valeurs données. Affichez les informations du livre dans le programme principal.

struct livre
{
    /* data */
    char titre[20];
    char auteur[20];
    int annee;
};



struct livre  create() {
    struct livre r;
    strcpy(r.titre,"1984");
    strcpy(r.auteur,"George orwell");
    r.annee = 1980;

    return r;
}





int
main()
{
    struct livre p1 = create();// r


    printf("L'info : \n");
    printf("titre : %s\n",p1.titre);
    printf("Auteur : %s\n",p1.auteur);
    printf("Annee : %d",p1.annee);

    return 0;
}
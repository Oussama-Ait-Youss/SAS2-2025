#include <stdio.h>



// Challenge 1 : Définition et Utilisation de Structure
// Écrivez un programme C qui définit une structure pour représenter
// une personne avec les champs nom, prenom, et age. Créez une
// variable de cette structure, assignez des valeurs aux champs,
// et affichez ces valeurs.

struct person
{
    /* data */
    char nom[50];
    char prenom[50];
    int age;
};


int main(){

    struct person p1;

    char nom[50],prenom[50];
    int age;
    printf("Entres  le nom :");
    scanf(" %[^\n]",p1.nom);

    printf("Entrez le prenom :");
    scanf(" %[^\n]",p1.prenom);

    printf("Entrez l'age :");
    scanf("%d",&p1.age);

    // p1.nom = nom;
    // p1.prenom = prenom;
    // p1.age = age;


    // affichage
    printf("le nom : %s\n",p1.nom);
    printf("le prenom :%s\n",p1.prenom);
    printf("le age : %d",p1.age);



    return 0;

}
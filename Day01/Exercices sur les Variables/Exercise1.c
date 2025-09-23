#include <stdio.h>

// Challenge 1 : Affichage Informations
// Écrivez un programme en C qui va permettre d'afficher
// vos informations personnelles : nom, prénom, âge, sexe, et adresse email.
// Les données sont saisies à partir du clavier.


int main(){
    printf("#########  Affichage Informations #########\n");
    char nom[50];
    char prenom[50];
    int age;
    char sexe;
    char email[100];
    printf("Entrer votre nom :");
    scanf(" %[^\n]",&nom);
    printf("Entrer votre prenom:");
    scanf(" %[^\n]",&prenom);
    printf("Entrer l'age :");
    scanf(" %d",&age);
    printf("Enter l'sexe (M:male/F:female):");
    scanf(" %c",&sexe);
    printf("Enter votre email :");
    scanf(" %s",&email);
    printf("\n");
    printf("------- vos informations personnelles ------\n");
    printf("votre nom : %s",nom);
    printf("\nvotre prenom : %s",prenom);
    printf("\nvotre age : %d",age);
    printf("\nvotre sexe : %c",sexe);
    printf("\nvotre email : %s",email);

    return 0;
}
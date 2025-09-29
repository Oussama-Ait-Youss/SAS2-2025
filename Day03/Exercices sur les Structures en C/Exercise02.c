#include <stdio.h>
#include <string.h>
// Challenge 2 : Structure avec Tableau
// Écrivez un programme C qui définit une structure pour représenter
// un étudiant avec les champs nom, prenom, et un tableau d'entiers
// pour stocker les notes. Assignez des valeurs aux champs et aux
// notes, puis affichez les informations de l'étudiant.

// definition de la structure
struct Etudiants
{
    /* data */
    char nom[50];
    char prenom[50];
    int notes[10];
};

int main()
{

    struct Etudiants T[10];

   
        for (int i = 0; i < 10; i++)
        {
            /* code */
            printf("Entrez le nom :");
            scanf(" %[^\n]", T[i].nom);

            printf("Entrez le prenom :");
            scanf(" %[^\n]", T[i].prenom);

            for (int j = 0; j < 10; j++)
            {
                /* code */
                printf("Entrez la note %d : ", i + 1);
                scanf("%d",T[i].notes[j]);
            }
        }

        // affichage
        for (int i = 0; i < 10; i++)
        {
            /* code */
            printf("le nom : %s",T[i].nom);
            printf("le prenom : %s",T[i].prenom);
            for (int j = 0; j < 10; j++)
            {
                printf("les notes : %d",T[i].notes[j]);
            }
            
        }
        
}
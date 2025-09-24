#include <stdio.h>

// Challenge 15 : Fusion de Deux Tableaux
// Écrivez un programme C qui fusionne deux tableaux d'entiers en un seul
// tableau. Le programme doit demander à l'utilisateur le nombre
// d'éléments pour chaque tableau, puis les éléments des deux tableaux,
// et afficher le tableau fusionné.

int main()
{

    int n1, n2;

    printf("Entrez le nombre d'elements  tableau 1:");
    scanf("%d", &n1);

    int T1[n1];

    // initialisation tabeau 1
    for (int i = 0; i < n1; i++)
    {
        /* code */
        printf("Entrez %d valeur :", i + 1);
        scanf("%d", &T1[i]);
    }

    printf("Entrez le nombre d'elements  tableau 2:");
    scanf("%d", &n2);

    int T2[n2];

    // initialisation tabeau 2
    for (int i = 0; i < n2; i++)
    {
        /* code */
        printf("Entrez %d valeur :", i + 1);
        scanf("%d", &T2[i]);
    }

    int T3[n1 + n2];

    // fusion des tabeau
    //  Copy T1 into T3
    for (int i = 0; i < n1; i++)
    {
        T3[i] = T1[i];
    }

    // Copy T2 into T3, starting from index n1
    for (int i = 0; i < n2; i++)
    {
        T3[n1 + i] = T2[i];
    }

    // affichage
    for (int i = 0; i < n1 + n2; i++)
    {
        /* code */
        /* code */
        printf("%d", T3[i]);
    }
}
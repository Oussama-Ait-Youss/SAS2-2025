#include <stdio.h>

// Challenge 3 : Concaténation de Chaînes
// Écrivez un programme C qui lit deux chaînes de caractères
// et les concatène en une seule chaîne. Affichez la chaîne
// résultante.

int main()
{
    char string1[] = "hello";
    char string2[] = " world";
    int n1 = 0, n2 = 0;

    // calcul longueur de string1
    int i = 0;
    while (string1[i] != '\0')
    {
        /* code */
        n1++;
        i++;
    }

    // calcul longueur de string2
    int j = 0;
    while (string2[i] != '\0')
    {
        /* code */
        n2++;
        j++;
    }
    printf("%d %d",i,j);

    char concat[n1 + n2];
    for (int i = 0; i < n1; i++)
    {
        /* code */
        concat[i] = string1[i];
    }
    int b = 0;
    for (b = 0; b < n2; b++)
    {
        /* code */
        concat[n1 + b] = string2[b];
    }
    concat[b] = '\0';
    //affichage

    // for (int i = 0; i < n1 + n2; i++)
    // {
    //     /* code */
    //     printf("%c",concat[i]);
    // }
    printf("%s",concat);
    
    
    
    
}
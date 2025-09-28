#include <stdio.h>
#include <string.h>

// Challenge 4 : Comparaison de Chaînes
// Écrivez un programme C qui lit deux chaînes de caractères
// et compare si elles sont égales ou non. Affichez un message
// indiquant si les chaînes sont égales ou différentes.





int main(){


    char word1[50],word2[50];

    printf("enter the first word :");
    fgets(word1,50,stdin);
    printf("entre the second word :");
    fgets(word2,50,stdin);


    // Comparaison de chanes
    int found = 1,i = 0;
    while (word1[i] != '\0' || word2[i] != '\0')
    {
        /* code */
        if (word1[i] != word2[i])
        {
            /* code */
            found = 0;
            break;
        }
        i++;
    }
    

    // affichage
    if (found)
    {
        /* code */
        printf("the words are  equal...");
    }else{
        printf("the words are  not equal...");
    }
    

    return 0;
}
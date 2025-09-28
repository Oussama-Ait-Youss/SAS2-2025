#include <stdio.h>
#include <string.h>



// Challenge 9 : Suppression des Espaces
// Écrivez un programme C qui lit une chaîne de
// caractères et supprime tous les espaces. Affichez
// la chaîne résultante.

int main()
{

    char string[10];
    int length;

    printf("Entre a word :");
    fgets(string,10, stdin);

    length = strlen(string);

    // change the \n with \0;
    for (int i = 0; i < length; i++)
    {
        /* code */
        if (string[i] == '\n')
        {
            /* code */
            string[i] = '\0';
            break;
        }
    }




    int i = 0;
    int j = 0;
    while(string[i])
    {
        /* code */
        if (string[i] != ' ')
        {
            /* code */
            string[j] = string[i];
            j++;
        }
        i++;
    }
    string[j] = '\0';

    
    printf("result is : %s",string);
    



    


    return 0;
}
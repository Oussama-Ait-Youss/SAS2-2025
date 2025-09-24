#include <stdio.h>



int main(){
    int T[] = {0,0,0,0,0,0,0,0,0,0};

    int T_copie[10];
    for (int i = 0; i < 10; i++)
    {
            /* code */
            T_copie[i] = T[i];
        
    }
    

     //Affichage premiere tableau
     printf("1 tableau:");
    for (int i = 0; i < 10; i++)
    {
        /* code */
        printf("%d",T[i]);
    }
    printf("\n2 tableau:");
    //Affichage deuxieme tableau
    for (int i = 0; i < 10; i++)
    {
        /* code */
        printf("%d",T_copie[i]);
    }


}
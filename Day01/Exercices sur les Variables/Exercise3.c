#include <stdio.h>


// Challenge 3 : Conversion de la distance

// Écrivez un programme qui demande la distance en kilomètres et la transforme en yards. Formule :

// Yards = Km * 1093.61


int main(){
    printf("#### Conversion de la distance ####\n");

    float km;
    printf("Entrer la distance en kilometres :");
    scanf("%f",&km);
    printf("%F km = %.2f Yard",km,km*1093.61);

}
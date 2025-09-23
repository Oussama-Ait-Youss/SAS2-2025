#include <stdio.h>
// Challenge 2 : Conversion de la température

// Écrivez un programme qui demande la température en Celsius et la transforme en Kelvin. Formule :

// K = C + 273.15


int main(){
    printf("#### Conversion de la temperature ####\n");;

    float C,K = 0;
    printf("Entrer la temperature :");
    scanf("%f",&C);
    printf("\n-------------\n");
    printf("%f C en kelvin est : %f",C,C + 273.15);
    return 0;
}
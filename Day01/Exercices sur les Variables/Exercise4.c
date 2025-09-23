#include <stdio.h>

// Challenge 4 : Conversion de la vitesse

// Écrivez un programme qui demande la vitesse en kilomètres par heure (km/h) et la transforme en mètres par seconde (m/s). Formule :

// m/s = km/h * 0.27778


int main(){
    printf("#### Conversion de la vitesse ####\n");
    float kmH;

    printf("entrer la vitesse ne kilometres :");
    scanf("%f",&kmH);

    printf("%.2f km/h  = %.2f m/s",kmH,kmH * 0.27778);

}
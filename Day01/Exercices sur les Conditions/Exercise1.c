#include <stdio.h>

// Challenge 1 : Évaluation d'un Prêt

// Écrivez un programme C qui évalue l'éligibilité pour un prêt en fonction de :

//     Revenu annuel (en euros)
//     Score de crédit (sur 1000)
//     Durée du prêt (en années)

// Les conditions pour l'éligibilité sont :

//     Revenu >= 30 000 € et Score de crédit >= 700 et Durée du prêt <= 10 ans : Éligible
//     Revenu >= 30 000 € et Score de crédit >= 650 et Durée du prêt <= 15 ans : Éligible avec conditions
//     Revenu < 30 000 € ou Score de crédit < 650 ou Durée du prêt > 15 ans : Non éligible

// Affichez un message en fonction de l'éligibilité.




int main() {
    int revenu, credit, duree_pret;

    printf("Entrez le revenu : ");
    scanf("%d", &revenu);

    printf("Entrez la duree du pret : ");
    scanf("%d", &duree_pret);

    printf("Entrez le score de credit : ");
    scanf("%d", &credit);

    if (revenu >= 30000 && credit >= 700 && duree_pret <= 10) {
        printf("Eligible\n");
    } else if (revenu >= 30000 && credit >= 650 && duree_pret <= 15) {
        printf("Eligible avec conditions\n");
    } else {
        printf("Non Eligible\n");
    }

    return 0;
}

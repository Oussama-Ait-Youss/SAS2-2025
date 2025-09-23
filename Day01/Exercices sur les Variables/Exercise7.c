#include <stdio.h>

// Challenge 7 : Moyenne pondérée de trois nombres

// Écrivez un programme en C pour calculer la moyenne pondérée de trois nombres donnés par l'utilisateur avec les pondérations suivantes :

//     1er nombre : pondération 2
//     2ème nombre : pondération 3
//     3ème nombre : pondération 5


int main() {
    int p1, p2, p3;
    float moyenne;

    printf("Entrez les trois nombres :\n");
    scanf("%d %d %d", &p1, &p2, &p3);

    moyenne = (p1 * 2 + p2 * 3 + p3 * 5) / 10.0;

    printf("La moyenne pondérée est : %.2f\n", moyenne);

    return 0;
}

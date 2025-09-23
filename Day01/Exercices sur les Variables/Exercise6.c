#include <stdio.h>

// Challenge 6 : Calcul et affichage des résultats
// Deux nombres réels, a et b, sont saisis au clavier. Calculez et affichez a + b, a - b, a * b, et a / b avec précision décimale.


int main(){
    int a,b;
    int opr;
    printf("#### Calcul et affichage des résultats ####\n");

    printf("Entrer les nombre :\n");
    scanf("%d %d",&a,&b);

    printf("Entrer l'operation (1 -> multiplication 2 -> substraction 3 -> Addision 4 -> division): ");
    scanf("%d",&opr);

    switch (opr)
    {
    case 1:
        /* code */
        printf("%d * %d = %d",a,b,a*b);
        break;
    case 2:
        /* code */
        printf("%d - %d = %d",a,b,a-b);
        break;
    case 3:
        /* code */
        printf("%d + %d = %d",a,b,a+b);
        break;
    case 4:
        /* code */
        if (!(b <= 0))
        {
            /* code */
            printf("%d / %d = %d",a,b,a/b);
        }else{
            printf("la division par 0 impossible...");
        }
        
        break;
    default:
     printf("ERROR...");
        break;
    }

}
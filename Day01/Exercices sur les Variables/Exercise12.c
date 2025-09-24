#include <stdio.h>


// Challenge 12 : Nombre entier à quatre chiffres en ordre inverse
// Écrivez un programme C pour afficher un nombre entier à quatre chiffres dans 
// l'ordre inverse sans utiliser de boucle. Par exemple, si le nombre entier est 1234, son inverse est 4321.


int main(){
    int a,rem,rev = 0;
    printf("Entrez un nombre :");
    scanf("%d",&a);

    while (a > 0)
    {
        /* code */
        rem =  a % 10;
        rev = rev * 10 + rem;
        a = a / 10;

    }
    printf("result %d",rev);

  
}

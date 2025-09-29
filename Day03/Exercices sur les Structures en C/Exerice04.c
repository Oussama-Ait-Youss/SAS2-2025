#include <stdio.h>



// Challenge 4 : Structure avec Pointeurs
// Écrivez un programme C qui définit une structure pour représenter un point dans un plan avec les champs
// x et y. Utilisez des pointeurs pour créer une variable de cette structure et modifiez ses valeurs. Affichez les valeurs dint u point.


struct Point
{
    /* data */
    float x;
    float y;
};



int main()
{
    struct Point p = {1,2};

 



    printf("x = %.2f",p.x);
    printf("y = %.2f",p.y);

\


    return 0;
        
}
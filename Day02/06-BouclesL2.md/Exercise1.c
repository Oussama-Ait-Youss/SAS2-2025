#include <stdio.h>




int main(){

    int a;


    printf("Entrez le nombre :");
    scanf("%d",&a);


    for (int i = 10; i >= 0; i--)
    {
        /* code */
        printf("%d x %d = %d\n",a,i,a*i);
    }
    

}
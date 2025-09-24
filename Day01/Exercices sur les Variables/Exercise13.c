#include <stdio.h>

int main(){

    int a,rev = 0,counter;
    
    printf("Entrez un nombre:");
    scanf("%d",&a);

    while (a > 0)
    {
        /* code */
        a = a / 2;
        if((float)(a / 2) > 0){
            counter = 1;
        }else{
            counter = 0;
        }
        if (counter == 0)
        {
            /* code */
            rev = rev * 10 + 0;
        }else{
            rev = rev * 10 + 1;
        }
        
        

    }
    
    

}
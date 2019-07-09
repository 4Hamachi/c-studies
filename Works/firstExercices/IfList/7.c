#include <stdio.h>

int main(){

    int numero1;
    int numero2;
    int numero3;
    printf("coloque um numero \n");
    scanf("%d",&numero1);

    printf("coloque um numero \n");
    scanf("%d",&numero2);

    printf("coloque um numero \n");
    scanf("%d",&numero3);

    if  (numero1 > numero2 && numero1 > numero3)
    {
        if (numero2 < numero3)
        {
            printf("o seu primeiro numero e o maior, o segundo e o menor dos tres %d %d\n", numero1, numero2);
        }
        else
        {
            printf("o seu primeiro numero e o maior, o segundo e o menor dos tres %d %d\n", numero1, numero3);
        } 
        
    }

    else if  (numero2 > numero3 && numero2 > numero1)
    {
        if(numero1 < numero3)
        {
            printf("o seu primeiro numero e o maior, o segundo e o menor dos tres %d %d\n", numero2, numero1);
        }
        else
        {
            printf("o seu primeiro numero e o maior, o segundo e o menor dos tres %d %d\n", numero2, numero3);
        }
    }    

    else if (numero3 > numero2 && numero3 > numero1 )
    {
        if(numero2 < numero1)
        {
          printf("o seu primeiro numero e o maior, o segundo e o menor dos tres %d %d\n",numero3,numero2 );
        }
        else
        {
            printf("o seu primeiro numero e o maior, o segundo e o menor dos tres %d %d\n",numero3,numero1 );
        }
          
    }

    else
    {
            printf("todos sao iguais\n");
    }  


    return 0;
}
#include <stdio.h>

int main(){

    int resultado;
    int numero1;
    int numero2;
    int impar;
    int par;

        printf("coloque um numero intero\n ");
    scanf("%d",&numero1);
        printf("coloque um numero inteiro\n");
    scanf("%d",&numero2);

    resultado = numero1 + numero2;
    resultado%2 == 0;

    if (resultado % 2 == 0)
    {
        printf("esse numero e par\n");
    }

    else
    {
        printf("esse numero e impar\n");
    }
    
}
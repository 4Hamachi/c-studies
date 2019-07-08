#include <stdio.h>

int main(){

    int numero1;
    int numero2;

    printf("coloque um numero \n");
    scanf("%d",&numero1);
    printf("coloque outro numero\n");
    scanf("%d",&numero2);

    if (numero1 > numero2)
    {
        printf("o primeiro numero eh maior: %d\n", numero1);
    }
    else if (numero2 > numero1)
    {
        printf("o segundo numero eh maior: %d\n", numero2);
    }
    else 
    {
        printf("os numeros são iguais\n");
    }
}
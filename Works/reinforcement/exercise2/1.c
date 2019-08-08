#include <stdio.h>

int main(){

    int numero1,numero2,numero3;

    printf("coloque um numero : ");
    scanf("%d",&numero1);
    printf("coloque um numero: ");
    scanf("%d",&numero2);   
    printf("coloque um numero: ");
    scanf("%d",&numero3);

    if (numero1 > numero2 && numero1 > numero3)
    {
        printf("o primeiro numero eh o maior: %.d\n",numero1);

    }
    
    else if (numero2 > numero3)
    {
        printf("segundo numero eh o maior %.d\n",numero2);
    }

    else if(numero3 > numero1)
    {
        printf("o terçeiro numero eh o maior:  %.d\n",numero3);
    }

    else
    {
        printf("nao pode ser todos numeros iguais\n");
    }
    
    
    
         
}
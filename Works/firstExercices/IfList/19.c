#include <stdio.h>

int main(){

    int resultado;
    int numero1;
    int numero2;
    int impar;
    int par;
    char operacao;

    printf("coloque um numero intero\n");
    scanf("%d",&numero1);
    printf("coloque um numero inteiro\n");
    scanf("%d",&numero2);
    getchar();
    printf("escolha uma operaçao\n");
    scanf("%c",&operacao);


    switch (operacao)
    {
        case'+': 
           resultado = numero1 + numero2;
           break;
        
        case'-': 
           resultado = numero1 - numero2;
           break;

        case'/': 
           resultado = numero1 / numero2;
           break;

        case'*': 
           resultado = numero1 * numero2;
           break;      

    }
    
    

    if (resultado % 2 == 0)
    {
        printf("esse numero e par\n");
    }
    
    else
    {
        printf("esse numero e impar\n");
    }

    if (resultado > 0)
    {
        printf("esse numero e positivo\n");
    }

    else if(resultado == 0)
    {
        printf("esse numero e neutro\n");
    }

    else
    {
        printf("esse numero e negativo\n");
    }
    
    
}

#include <stdio.h>

int main(){

    char   operacao;
    double numero1;
    double numero2;
    double resultado;

    printf("digite um numero: ");
    scanf("%lf",&numero1);
    printf("digite mais um numero: ");
    scanf("%lf",&numero2);
    getchar();
    printf("escolha sua operaçao: ");
    scanf("%c",&operacao);

    switch (operacao)
    {
    case '+':
        resultado = numero1 + numero2;
        
        break;

    case '-':
        resultado = numero1 - numero2;
        break;

    case '/':
        resultado = numero1 / numero2;
        break;

    case '*':
        resultado = numero1 * numero2;
        break;            
    
    default:
        printf("operaçao invalida\n");
        break;
    }

    printf("%.2lf\n",resultado);

    return 0;
    
}
    
    

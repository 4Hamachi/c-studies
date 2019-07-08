#include <stdio.h>

int main(){

    double resultado3;
    double resultado2;
    double resultado1;
    int numero1;
    int numero2;
    double numeroReal;

    printf("coloque um numero\n");
    scanf("%d",&numero1);
    printf("coloque outro numero\n");
    scanf("%d",&numero2);
    printf("coloque um numero real\n");
    scanf("%lf",&numeroReal);

    resultado1 = (numero1 * 2) * (numero2 / 2);
    resultado2 = numero1 * 3 + numeroReal;
    resultado3 = numeroReal * numeroReal * numeroReal;

    printf("resultado do resultado 1 %.2lf\nresultado do segundo %.2lf\nresultado 3 %.2lf\n", resultado1, resultado2,resultado3);

    return 0;    
}
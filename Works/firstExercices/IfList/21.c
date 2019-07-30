
#include <stdio.h>

int main(){

    double gastosFinal;
    char ope;
    double litros;
    double descontos;

    printf("vc quer alcool ou gasolina e  \n");
    scanf("%c",&ope);
    printf("quantos litros vc quer\n");
    scanf("%lf",&litros);


    if ( ope == 'a')
    {
        if (litros <= 20)
        {
            gastosFinal = litros * 1.90;
            descontos = gastosFinal * 0.03;
            gastosFinal = gastosFinal - descontos; 

            printf("preço final %.2lf\n",gastosFinal);
        }
    
        else if (litros > 21)
        {
            gastosFinal = litros * 1.90;
            descontos = gastosFinal * 0.05;
            gastosFinal = gastosFinal - descontos; 

            printf("preço final %.2lf\n",gastosFinal);
        }
    }
    if ( ope == 'g')
    {
        if (litros <= 20)
        {
            gastosFinal = litros * 2.50;
            descontos = gastosFinal * 0.04;
            gastosFinal = gastosFinal - descontos; 

            printf("preço final %.2lf\n",gastosFinal);
        }
    
        else if (litros > 21)
        {
            gastosFinal = litros * 2.50;
            descontos = gastosFinal * 0.06;
            gastosFinal = gastosFinal - descontos; 

            printf("preço final %.2lf\n",gastosFinal);
        }
    }         
}
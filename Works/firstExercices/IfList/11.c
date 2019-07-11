#include <stdio.h>

int main(){

    double salario;
    double salarioAntesDoReajuste ;
    double percentual;
    

    printf("quanto vc quer ganhar\n");
    scanf("%lf",&salarioAntesDoReajuste);
    
    if(salarioAntesDoReajuste <= 280 )
    {
        percentual = salarioAntesDoReajuste * 0.20;

        salario = salarioAntesDoReajuste + percentual;

        printf("o primeiro e o salaraio antes do reajuste o segundo e o valor do aumento o terçeiro e a soma dos dois e seu salarario aumentou 20 por cento %.2lf  %.2lf  %.2lf\n",salarioAntesDoReajuste,percentual,salario);
    
    }    

    else if(salarioAntesDoReajuste >= 281 && salarioAntesDoReajuste <= 700 )
    {
        percentual = salarioAntesDoReajuste * 0.15;

        salario = salarioAntesDoReajuste + percentual;

        printf("o primeiro e o salaraio antes do reajuste o segundo e o valor do aumento o terçeiro e a soma dos dois e seu salarario aumentou 15 por cento %.2lf  %.2lf  %.2lf\n",salarioAntesDoReajuste,percentual,salario);
    
    }

    else if(salarioAntesDoReajuste >= 701 && salarioAntesDoReajuste <= 1500 )
    {
        percentual = salarioAntesDoReajuste * 0.10;

        salario = salarioAntesDoReajuste + percentual;

        printf("o primeiro e o salaraio antes do reajuste o segundo e o valor do aumento o terçeiro e a soma dos dois e seu salarario aumentou 10 por cento %.2lf  %.2lf  %.2lf\n",salarioAntesDoReajuste,percentual,salario);
        
    }    
    
    else
    {
        percentual = salarioAntesDoReajuste * 0.05;

        salario = salarioAntesDoReajuste + percentual;

        printf("o primeiro e o salaraio antes do reajuste o segundo e o valor do aumento o terçeiro e a soma dos dois e seu salarario aumentou 5 por cento %.2lf  %.2lf  %.2lf\n",salarioAntesDoReajuste,percentual,salario);
    }
    
    return 0;

}
#include <stdio.h>

int main(){

    int horasTrabalhadas;
    double salarioPorHora;
    double salarioDoMes;

    printf("quanto você ganha por hora\n");
    scanf("%lf",&salarioPorHora);
    printf("quantas horas você trabalha\n");
    scanf("%d",&horasTrabalhadas);

    salarioDoMes = salarioPorHora * horasTrabalhadas;

    printf("salario do final do mes: R$ %.2lf\n", salarioDoMes);

    return 0;

    

}
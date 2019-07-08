#include <stdio.h>

int main(){

    double inss;
    int horas;
    double salario;
    double impostos;
    double sindicato;
    double salarioDoFinalDoMes;
    double salarioLiquido;
    double Ir;

    printf("coloque seu salrio\n");
    scanf("%lf",&salario);
    printf("coloque quantas horas você trabalha\n");
    scanf("%d",&horas);
    
    salarioDoFinalDoMes = horas * salario * 20;
   
    printf("seu salrio no final do mes %.2lf\n", salarioDoFinalDoMes);

    inss = salarioDoFinalDoMes * 0.08;
  
    printf("quanto vc pagou no inss %.2lf\n", inss);

    sindicato = salarioDoFinalDoMes * 0.05;

    printf("qunato vc pagou no sindicato %.2lf\n", sindicato);

    Ir = salarioDoFinalDoMes * 0.11;

    printf("quanto vc paga no Ir %.2lf\n", Ir);


    salarioLiquido = salarioDoFinalDoMes - Ir - sindicato - inss;

    printf("seu salario liquido %.2lf\n", salarioLiquido);






    return 0;

    


}
    


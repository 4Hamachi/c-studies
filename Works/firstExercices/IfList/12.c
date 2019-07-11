#include <stdio.h>

int main(){

    double salario;
    double salarioLiquido;
    double salarioBruto;
    int horas;
    double Ir;
    double inss;
    double sindicato;
    double fgts;
    double totalDeDiscontos;

    printf("quantas horas vc trabalha\n");
    scanf("%d",&horas);
    printf("quanto vc ganha por hora\n");
    scanf ("%lf",&salario);

    salarioBruto = horas * salario * 20;
    inss = salarioBruto * 0.10;
    sindicato = salarioBruto * 0.03;
    fgts = salarioBruto * 0.11;
        
    if(salarioBruto <= 900)
    {
        totalDeDiscontos = fgts + sindicato + inss;
        salarioLiquido = salarioBruto - inss - sindicato - fgts;

        printf("Salario Bruto: (%d * %.2lf): R$ %.2lf\n(-)Ir: ISENTO\n(-)INSS(10%%): R$ %.2lf\nFGTS(11%%): R$ %.2lf\nTotal de descontos: R$ %.2lf\nSalario Liquido: R$ %.2lf\n ", horas, salario, salarioBruto,inss,fgts,totalDeDiscontos,salarioLiquido);
    }

    else if(salarioBruto >= 901 && salarioBruto <= 1500)
    {
        totalDeDiscontos = fgts + sindicato + inss + Ir; 
        Ir = salarioBruto * 0.05;
        salarioLiquido = salarioBruto - inss - sindicato - fgts;

        printf("Salario Bruto: (%d * %.2lf): R$ %.2lf\n(-)Ir(5%%): R$ %.2lf\n(-)INSS(10%%): R$ %.2lf\nFGTS(11%%): R$ %.2lf\nTotal de descontos: R$ %.2lf\nSalario Liquido: R$ %.2lf\n ", horas, salario, salarioBruto,Ir,inss,fgts,totalDeDiscontos,salarioLiquido);
    } 

    else if(salarioBruto >= 1501 && salarioBruto <= 2500)
    {
        totalDeDiscontos = fgts + sindicato + inss + Ir; 
        Ir = salarioBruto * 0.10;
        salarioLiquido = salarioBruto - inss - sindicato - fgts;

        printf("Salario Bruto: (%d * %.2lf): R$ %.2lf\n(-)Ir(10%%): R$ %.2lf\n(-)INSS(10%%): R$ %.2lf\nFGTS(11%%): R$ %.2lf\nTotal de descontos: R$ %.2lf\nSalario Liquido: R$ %.2lf\n ", horas, salario, salarioBruto,Ir,inss,fgts,totalDeDiscontos,salarioLiquido);   
    }

    else 
    {
        totalDeDiscontos = fgts + sindicato + inss + Ir; 
        Ir = salarioBruto * 0.20;
        salarioLiquido = salarioBruto - inss - sindicato - fgts;

        printf("Salario Bruto: (%d * %.2lf): R$ %.2lf\n(-)Ir(20%%): R$ %.2lf\n(-)INSS(10%%): R$ %.2lf\nFGTS(11%%): R$ %.2lf\nTotal de descontos: R$ %.2lf\nSalario Liquido: R$ %.2lf\n ", horas, salario, salarioBruto,Ir,inss,fgts,totalDeDiscontos,salarioLiquido);
    }
          
    return 0;
}
#include <stdio.h>

int main(){
    int nota1;
    int nota2;
    int nota3;
    int nota4;
    double resultado;
    printf("digite as quatro notas do seus bimestres \n");
    
    scanf("%d",&nota1);
    scanf("%d",&nota2);
    scanf("%d",&nota3);
    scanf("%d",&nota4);
    
    resultado = (double) (nota1 + nota2 + nota3 + nota4) / (double) 4;

    printf("resultado %.2lf\n", resultado);

    return 0;
}
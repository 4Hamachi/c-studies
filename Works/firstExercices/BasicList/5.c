#include <stdio.h>

int main(){
    int metros;
    int centimetros;

    printf("digite quantos metros quer transformar em centimetros\n");
    scanf("%d",&metros);

    centimetros = metros * 100;
    
    printf("centimetos convertidos %d\n", centimetros);

    return 0;


}
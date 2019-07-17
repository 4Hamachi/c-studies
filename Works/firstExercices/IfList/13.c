#include <stdio.h>

int main(){

    int diaDaSemana;
    

    printf("colque um numero de 1 a 7 e mostrarei o dia da semana\n");
    scanf("%d",&diaDaSemana);

    switch (diaDaSemana)
    {
        case 1:
            printf("DOMINGO \n");
            break; 

        case 2:
            printf("SEGUNDA \n");
            break;

        case 3:
            printf("TERÇA \n");
            break;

        case 4:
            printf("QUARTA \n");
            break;

        case 5:
            printf("QUINTA \n");
            break;

        case 6:
            printf("SEXTA \n");
            break;

        case 7:
            printf("SABADO \n");
            break;

        default:
            printf("esse numero nao corresponde a 1 a 7  %d\n",diaDaSemana);
    }

    return 0;
}
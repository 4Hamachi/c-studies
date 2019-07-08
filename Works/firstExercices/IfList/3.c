#include <stdio.h>

int main(){

    char letra;

    printf("coloque F ou M \n");
    scanf("%c",&letra);

    switch (letra)
    {
    case 'f':
        printf("F de feminino %c\n", letra);
        break;

    case 'F':
        printf("F de feminino %c\n", letra);
        break;

    case 'm':
        printf("M de masculino %c\n", letra);
        break;

    case 'M':
        printf("M de masculino %c\n", letra);
        break;

    default:
        printf("sexo invalido\n");
        break;
    }
    return 0;
}
#include <stdio.h>

int main(){

    char perguntas;
    int contador = 0;

    printf("vc ligou pra vitima\n");
    scanf("%c",&perguntas);
    getchar();
    if (perguntas == 's')
    {
        contador = contador + 1;
    }
    
    printf("vc esteve no local\n");
    scanf("%c",&perguntas);
    getchar();
    if (perguntas == 's')
    {
        contador = contador + 1;
    }    
    printf("mora perto da vitima\n");
    scanf("%c",&perguntas);
    getchar();
    if (perguntas == 's')
    {
        contador = contador + 1;
    }    
    printf("devia algo pra vitima \n");
    scanf("%c",&perguntas);
    getchar();
    if (perguntas == 's')
    {
        contador = contador + 1;
    }    
    printf("vc trabalhava com a vitima\n");
    scanf("%c",&perguntas);
    getchar();
    if (perguntas == 's')
    {
        contador = contador + 1;
    }

    if (contador == 2)
    {
        printf("suspeito\n");
    }

    else if (contador >= 3 && contador <= 4)
    {
        printf("cumplice\n");
    }

    else if (contador == 5)
    {
        printf("assasino\n");
    }

    else
    {
        printf("inocente\n");
    }
    

    return 0;



    

    
}
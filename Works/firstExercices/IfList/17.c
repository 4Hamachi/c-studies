#include <stdio.h>

int main(){

    int ano;
    int anoNaoBisssexto;
    int anoBissexto;

    printf("coloque um ano\n ");
    scanf("%d",&ano);

    ano%4 == 0;

    if (ano % 4 == 0)
    {
        printf("esse e um ano bissexto\n");
    }

    else
    {
        printf("esse ano nao e bissexto\n");
    }
    
    
}
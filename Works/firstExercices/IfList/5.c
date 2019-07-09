#include <stdio.h>

int main(){

    double nota1;
    double nota2;
    double media;

    printf("coloque sua nota primeiro bimestre");
    scanf("%lf",&nota1);
    printf("coloque sua nota segundo bimestre");
    scanf("%lf",&nota2);

    media = (nota1 + nota2) / 2;

    if(media > 10 || media < 0)
    {
        printf("nota invalida! %.2lf\n", media);
    }
    
    else if (media >= 7)
    {
        if (media == 10)
        {
            printf("aprovado com distinçao %.2lf\n", media);
        }
    
        else
        {
            printf("aprovado %.2lf\n", media);
        }
    }

    else 
    {
        printf("retido %.2lf\n", media);
    }    

    return 0;
}
#include <stdio.h>

int main(){

    double PrimeiraNota;
    double SegundaNota;
    double media;

    printf("coloque sua primeira nota da bimestre \n");
    scanf("%lf",&PrimeiraNota);
    printf("coloque sua segunda nota da bimestre\n");
    scanf("%lf",&SegundaNota);

    media = (PrimeiraNota + SegundaNota) / 2;

    if (media >= 0 && media <= 4 )
    {
        printf("nota E REPROVADO %.2lf\n",media);
    }

    else if (media >= 4.1 && media <= 6 )
    {
        printf("nota D REPROVADO %.2lf\n",media);
    }

    else if (media >= 6.1 && media <= 7.5 )
    {
        printf("nota C APROVADO %.2lf\n",media);
    }

    else if (media >= 7.6 && media <= 9.0 )
    {
        printf("nota b APROVADO %.2lf\n",media);
    }

    else if (media >= 9.1 && media <= 10.0 )
    {
        printf("nota A APROVADO %.2lf\n",media);
    }

    else
    {
       printf("nao tem como ter essa nota\n");
    }

    return 0;

    
}
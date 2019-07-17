#include <stdio.h>

int main(){

    double PrimeiroLado;
    double SegundoLado;
    double TerceiroLado;
    double TodosLados;

    printf("coloque a medida de um lado do triangulo\n");
    scanf("%lf",&PrimeiroLado);
    printf("coloque a seguna medida do triangulo\n");
    scanf("%lf",&SegundoLado);
    printf("coloque a terçeira medida do triangulo\n");
    scanf("%lf",&TerceiroLado);

    if (PrimeiroLado == SegundoLado && PrimeiroLado == TerceiroLado) 
    {
        printf("esse triangulo e equilatero\n");
    }

    else if (PrimeiroLado == SegundoLado || PrimeiroLado == TerceiroLado || SegundoLado == TerceiroLado)
    {
        printf("esse triangulo e isoceles\n");
    }

    else
    {
        printf("esse triangulo e escaleno\n");
    }
    

            return 0;


            

}
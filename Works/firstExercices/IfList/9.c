#include <stdio.h>

int main(){

    double numero1;
    double numero2;
    double numero3;

    printf("coloque um numero  \n");
    scanf("%lf",&numero1);

    printf(" coloque um numero \n");
    scanf("%lf",&numero2);

    printf("coloque um numero \n");
    scanf("%lf",&numero3);

    if (numero1 > numero2 && numero1 > numero3)
    {
        if (numero3 < numero2)
        {
            printf("em ordem decresente %.2lf %.2lf %.2lf\n", numero1,numero2,numero3);
        }
        else
        {
             printf("em ordem decresente %.2lf %.2lf  %.2lf\n", numero1, numero3, numero2);
        }
        
    }

    
    else if (numero2 > numero3)
    {
        if(numero1 < numero3)
        {
            printf("em ordem decresente %.2lf %.2lf  %.2lf\n", numero2, numero3, numero1);
        }
        else
        {
            printf("em ordem decresente %.2lf %.2lf %.2lf\n", numero2,numero1,numero3);
        }
        
    }

    else
    {
        if(numero1 < numero2)
        {
            printf("em ordem decresente %.2lf %.2lf  %.2lf\n", numero3, numero2, numero1);
        }
        else
        {
            printf("em ordem decresente %.2lf %.2lf %.2lf\n", numero3,numero1,numero2);
        }
        
    }
    
    return 0;       
}
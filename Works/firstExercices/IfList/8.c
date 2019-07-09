#include <stdio.h>

int main(){

    double numero1;
    double numero2;
    double numero3;

    printf("coloque o preço do seu item \n");
    scanf("%lf",&numero1);

    printf("coloque o preço do seu item \n");
    scanf("%lf",&numero2);

    printf("coloque o preço do seu item \n");
    scanf("%lf",&numero3);

    if (numero1 < numero2 && numero1 < numero3)
    {
        printf("numero %.2lf\n", numero1);
    }
    
    else if (numero2 < numero3 )
    {
        printf("numero  %.2lf\n", numero2);
    }
    else 
    {
        printf("numero  %.2lf\n", numero3);
    }
    return 0;       
}
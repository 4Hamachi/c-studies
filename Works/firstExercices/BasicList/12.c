#include <stdio.h>

int main(){

    double altura;
    double pesoIdeal;
    
    
    printf("coloque sua altura\n");
    scanf("%lf",&altura);

    pesoIdeal = (72.7*altura) - 58;

    printf("seu peso ideal é %.2lf\n", pesoIdeal);

    return 0;
}
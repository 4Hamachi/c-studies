#include <stdio.h>

int main(){

    double celsius;
    double farenheit;

    printf("transforme celsius em Farenheit\n");
    scanf("%lf",&celsius);

    farenheit = celsius * 9/5 + 32 ;

    printf("trasformado em celsius %.2lf\n", farenheit);

    return 0;

}
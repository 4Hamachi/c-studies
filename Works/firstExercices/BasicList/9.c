#include <stdio.h>

int main(){

    double celsius;
    double farenheit;

    printf("transforme Farenheit em celsius\n");
    scanf("%lf",&farenheit);

    celsius = (5 * (farenheit-32) / 9);

    printf("trasformado em celsius %.2lf\n", celsius);

    return 0;

}
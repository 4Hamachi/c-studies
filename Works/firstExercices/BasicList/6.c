#include <stdio.h>

#define PI 3.14

int main(){
    double area;
    int raio;
     
    printf("qual e o raio\n");
    scanf("%d",&raio);

    area = PI * 2 * raio;

    printf("area do circulo %.2lf\n", area);

    return 0;


}
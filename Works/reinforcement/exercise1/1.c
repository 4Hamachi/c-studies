#include <stdio.h>

int main(){


    double a,b,m;

        printf("coloque o valor de a: \n");
        scanf("%lf",&a);
        printf("coloque o valor de b: \n");
        scanf("%lf",&b);

        m = (2 / (1 /(a + 1) + 1/(b + 1))) -1;

        printf("resultado da media harmonica : %.2lf\n",m);

}
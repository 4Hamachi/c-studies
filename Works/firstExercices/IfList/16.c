#include <stdio.h>
#include <math.h>


int main(){

    double delta;
    double a;
    double b;
    double c;
    double x;
    double xDuaslinhas;
    
    printf("coloque o valor de a\n");
    scanf("%lf",&a);

    if(a == 0)
    {
        return 0;
    }

    printf("coloque valor b\n");
    scanf("%lf",&b);
    printf("coloque o teceiro numero\n");
    scanf("%lf",&c);

    delta = b * b  - 4 * a * c;

    if (delta == 0)
    {

        x = (-b + sqrt(delta)) / ( 2 * a);
        
        printf("se delta for igual a  zero so tem um resultado %.2lf\n",x);

    }

    else if ( delta < 0)
    {
        printf ("numero  negativo nao tem raiz\n");
    }

    else
    {
        x = (-b + sqrt(delta)) / (2 * a);
        xDuaslinhas = (-b - sqrt(delta)) / (2 * a);

        printf("resultados %.2lf %.2lf\n",x , xDuaslinhas);
    }
}
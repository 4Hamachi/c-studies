#include <stdio.h>

int main(){

    int x,y;

    printf("digite o valor de x\n");
    scanf("%d",&x);
    printf("digite o valor de y\n");
    scanf("%d",&y);

    (x > y) ? printf("x eh o maior \n")
            : printf("y eh o maior \n");

    return 0;        
}
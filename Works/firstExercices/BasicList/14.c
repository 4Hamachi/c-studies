#include <stdio.h>

int main(){

    double mbps;
    double mb;
    double tempo;

    printf("quanto e mb do que  vc quer baixar\n");
    scanf("%lf",&mb);
    printf("e qual e sua velocidade de internet\n");
    scanf("%lf",&mbps);

    tempo = mb / mbps;
    
    tempo = tempo / 60;

    printf("seu tempo para terminar de baixar %.2lf\n", tempo);

    return 0;



}
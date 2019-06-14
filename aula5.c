#include <stdio.h>
#include <stdlib.h>
int main(){
    int x, y = -1;
    printf("digite um valor inteiro");
    scanf("%d",&x);
    if (x > 0)     
    y = x % 3;
    printf("o resto de %d/3 eh: %d\n",x,y);

    printf("fim do programa\n");

    return 0;    




}
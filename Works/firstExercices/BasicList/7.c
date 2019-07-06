#include <stdio.h>

int main(){
    int lado;
    int area;

    printf("quanto e o lado do quadrado\n");
    scanf("%d",&lado);

    area = lado * lado * 2;

    printf("dobro da area do quadrado %d\n", area);

    return 0;
}
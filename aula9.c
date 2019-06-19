#include <stdio.h>
#include <stdlib.h>
int main() {
    int a, b;
    printf("digite dois valores inteiros: ");
    scanf("%d %d" ,&a,&b);
    do{
        printf("%d\n",a);
        a++;
    }while (a < b && a > 0);
    printf("fim do programa\n");
    system("pause");
    return 0;

}
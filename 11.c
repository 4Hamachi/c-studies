#include <stdio.h>

int main(){

    int a,b;

    printf("digite dois valoresinteiros: ");
    scanf("%d %d",&a,&b);

    while (a < b)
    {
        a++;
        printf("%d\n",a);

    }
        printf("fim do programa \n");
        return 0; 
}
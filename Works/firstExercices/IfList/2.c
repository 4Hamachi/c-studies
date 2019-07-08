#include <stdio.h>

int main(){

    int numero1;
    
    printf("coloque um numero \n");
    scanf("%d",&numero1);

    if (numero1 > 0)
    {
        printf("seu numero e positivo %d\n", numero1);
    }

    else if (numero1 < 0)
    {
        printf("seu numero eh negativo %d\n", numero1);
    }

    else
    {
        printf("seu numero eh neutro \n");
    }
    
    
    return 0;
}
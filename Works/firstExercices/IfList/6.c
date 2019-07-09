#include <stdio.h>

int main(){

    int numero1;
    int numero2;
    int numero3;

    printf("coloque um numero \n");
    scanf("%d",&numero1);

    printf("coloque um numero \n");
    scanf("%d",&numero2);

    printf("coloque um numero \n");
    scanf("%d",&numero3);

    if (numero1 > numero2 && numero1 > numero3)
    {
        printf("numero %d\n", numero1);
    }
    
    else if (numero2 > numero3 )
    {
        printf("numero  %d\n", numero2);
    }
    else 
    {
        printf("numero  %d\n", numero3);
    }
    return 0;       
}
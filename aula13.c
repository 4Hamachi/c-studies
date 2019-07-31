#include <stdio.h>

int main(){

    int i;
    do
    {
        printf("escolha uma opcao:\n");
        printf("(1) opecao 1\n");
        printf("(2) opecao 2\n");
        printf("(3) opecao 3\n");
        scanf("%d",&i);

    }while((i < 1) || (i > 3));
    printf("vc escolheu a opcao %d\n",i);

    return 0;
}
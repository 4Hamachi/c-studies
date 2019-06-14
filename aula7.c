#include <stdio.h>
#include <stdlib.h>
int main() {
    int num;
    printf("digite um numero: ");
    scanf("%d", &num);
    if (num >= 0){
        if (num == 0){
            printf("o numero e igual a 0.\n");
        }
    }else{
        printf("o numero  menor do que 0.\n");
        
    }

    return 0;
} 
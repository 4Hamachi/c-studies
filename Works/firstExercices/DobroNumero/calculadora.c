#include <stdio.h>
#include <stdlib.h>
int main(){
    char operação;
    printf("%c",operação);
    int numero1
    int numero2 
    int resultado
     printf("digite sua conta ");
    scanf("%d",&numero1);
    getchar();
    scanf("%c",&operação);
    getchar();
     scanf("%d",numero2);
     printf("%d",numero1);
     printf("%d",numero2);
    switch (ch){
    case '+':
        operação = numero1 + numero2; 
     printf ("soma.\n:%d",resultado ); 
     break;
    case '-':
    resultado = numero1 - numero2; 
     printf ("subitração.\n:%d",resultado ); 
     break;
    case '/':
    resultado = numero1 / numero2; 
     printf ("divisão.\n:%d",resultado ); 
     break;
    case '*':
    resultado = numero1 * numero2; 
     printf ("multiplicação.\n:%d",resultado );
     break;
    default :
     printf ("isso nao e uma conta matematica"); 

    }
    
    return 0;
}

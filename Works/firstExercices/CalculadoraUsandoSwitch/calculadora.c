#include <stdio.h>
#include <stdlib.h>
int main(){
    int nro;
     printf("digite sua conta ");
    scanf("%d",&nro); 
    switch (nro){
    case '+': printf ("soma.\n" ); break;
    case '-': printf ("subitração.\n" ); break;
    case '/': printf ("divisão.\n" ); break;
    case '*': printf ("multiplicação.\n" ); break;
    default : printf ("isso nao e uma conta matematica"); 
    }
    
    
    return 0;
}

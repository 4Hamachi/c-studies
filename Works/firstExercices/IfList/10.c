#include <stdio.h>

int main(){

    char letra;


    printf("coloque M se estuda de manha V se estuda a tarde ou N se estuda a noite  \n");
    scanf("%c",&letra);

    switch (letra)
    {
        case 'm':
            printf("bom dia\n");
            break;

        case 'M':
            printf("bom dia\n");
            break;  

        case 'v':
            printf("bom tarde\n");
            break;

        case 'V':
            printf("bom tarde\n");
            break;

        case 'n':
            printf("bom noite\n");
            break;

        case 'N':
            printf("bom noite \n");
            break; 

        default:
            printf("essa letra n corresponde a m,n,v %c\n", letra);              
    }

    return 0;   

      
}
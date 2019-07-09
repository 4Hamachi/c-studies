#include <stdio.h>

int main(){

    char letra;

    printf("coloque uma vogal \n");
    scanf("%c",&letra);
    

    switch (letra)
    {
    case 'a':
        printf("essa letra eh vogal  %c\n", letra);
        break;

    case 'A':
        printf("essa letra eh vogal  %c\n", letra);
        break;

    case 'e':
        printf("essa letra eh vogal  %c\n", letra);
        break;

    case 'E':
        printf("essa letra eh vogal  %c\n", letra);
        break;
    
    case 'i':
        printf("essa letra eh vogal  %c\n", letra);
        break;

    case 'I':
        printf("essa letra eh vogal  %c\n", letra);
        break;

    case 'o':
        printf("essa letra eh vogal  %c\n", letra);
        break;

    case 'O':
        printf("essa letra eh vogal  %c\n", letra);
        break;

    case 'u':
        printf("essa letra eh vogal   %c\n", letra);
        break;

    case 'U':
        printf("essa letra eh vogal  %c\n", letra);
        break;    

    default:
        printf("essa letra e consoante %c\n", letra);
        break;
    }

    return 0;
}


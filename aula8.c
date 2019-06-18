#include <stdio.h>
#include <stdlib.h>
int main() {
    int x,y;
    printf("digite x:");
    scanf("%d",&x);
    printf("digite y:");
    scanf("%d",&y);

    (x > y)? printf ("x eh maior.\n")
           : printf ("y eh o maior.\n");

           return 0;      
}
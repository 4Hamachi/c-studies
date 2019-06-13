#include <stdio.h>
#include <stdlib.h>
int main() {
    int x = 10, y = 10;
    y = ++x;
    // x++;
    // y = x;
    printf("x = %d \n",x);
    printf("y = %d \n",y);


    return 0;
}
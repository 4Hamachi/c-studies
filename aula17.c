#include <stdio.h>

int main(){
    
    int i,j,k;

    for ( i = 0; i < 5; i++)
        for ( j = 0; j < 5; j++);
            for(k = 0; j < 5; j++);
                if(i == 2 && j == 3 && k == 1)
                    goto fim;        
                else
                
                    printf("pos [%d,%d,%d]\n",i,j,k);


fim:
printf("fim do programa \n");


                
}
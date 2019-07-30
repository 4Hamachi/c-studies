#include <stdio.h>

int main(){
    double kg;
    double precoFinal = 0;
    double morango;
    double maca;
    double descontos;

    printf("vc quer quantos kilos de maça\n");
    scanf("%lf",&maca);
    printf("vc quer quantos kilos de morango\n");
    scanf("%lf",&morango);

    kg = maca + morango;

    if (maca <= 5)
    {
        maca = maca * 1.80;  
            
    }
    else if ( maca > 5)
    {
        maca = 1.80 * maca;
        
    }
    printf("preço total da maça %.2lf\n", maca); 
    precoFinal = precoFinal + maca;

    if (morango <= 5)
    {
        morango = morango * 2.50; 
           
    }
    else if ( maca > 5)
    {
        morango = 2.20 * morango;
        
    }
    printf("preço total do morango %.2lf\n", morango);
    
    precoFinal = precoFinal + morango;


    if (kg >= 8 || precoFinal >= 25 )
    {
        descontos = precoFinal * 0.10;
        precoFinal = precoFinal - descontos;

        
    }
    
    printf("preço total %.2lf\n", precoFinal);
        
}
#include <stdio.h>

int main(){

    int tipoDeCarne;
    double  fileDuplo;
    double  alcatra;
    double  picanha;
    double kg;
    int cartao;
    double descontoTotal;
    double preco;

    printf("qual tipo carne\n");
    printf("1 - File Duplo\n");
    printf("2 - Alcatra\n");
    printf("3 - Picanha\n");
    scanf("%d", &tipoDeCarne);

    if (tipoDeCarne == 1)
    {
        printf("quantos kilos de file duplo vc quer?\n");
        scanf("%lf",&kg);

        if (kg <= 5)
        {
            preco = kg * 4.90;
            
        }
        else if(kg >= 5)
        {
            preco = kg * 5.80;
        }
    }

    if (tipoDeCarne == 2)
    {
        printf("quantos kilos de alcatra vc quer?\n");
        scanf("%lf",&kg);

        if (kg <= 5)
        {
            preco = kg * 5.90;
            
        }
        else if(kg >= 5)
        {
            preco = kg * 6.80;
        }
    }

    if (tipoDeCarne == 3)
    {
        printf("quantos kilos de picanha vc quer?\n");
        scanf("%lf",&kg);

        if (kg <= 5)
        {
            preco = kg * 6.90;
            
        }
        else if(kg >= 5)
        {
            preco = kg * 7.80;
        }
    }

    printf("a compra doi feita  no cartao tabajara?\n");
    printf("1 - sim\n");
    printf("2 - nao\n");
    scanf("%d",&cartao);

    if (cartao == 1)
    {
        descontoTotal = preco * 0.05;
        preco = preco - descontoTotal;
    }    

    printf("Tipo de carne: ");
    if (tipoDeCarne == 1 )
    {
         printf("file duplo\n");
    }
     
    else if(tipoDeCarne == 2)
    {
         printf("alcatra\n");
    }
    else
    {
         printf("picanha\n");
    }
     
     
     
    printf("Quantidade de carne: %.2lfkg\n",kg);

    printf("Preço total R$: %.2lf\n",preco);
    printf("Tipo de pagamento: ");

    if (cartao == 1)
    {
        printf("cartão tabajara\n");
    }
    else
    {
        printf("dinheiro\n");
    }
    printf("Valor do desconto R$: %.2lf\n",descontoTotal);

    
    

     
    return 0; 
            
}
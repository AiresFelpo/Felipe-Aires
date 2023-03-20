#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float preco;
    printf("digite o valor do carro:");
    scanf("%f",&preco);
    if (preco<=0)
    {
        printf("preco invalido");
        getche ();
    }
    else

{    preco=preco*1.28*1.45;

    printf("%.2f",preco);}
    getche ();
}
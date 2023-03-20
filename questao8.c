#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float com, sal, car, valor;

printf("digite o salario:");
scanf("%f",& sal);
printf("digite a comissao pro carro vendido:");
scanf("%f",& com);
printf("digite o numero de carros vendido:");
scanf("%f",& car);
printf("digite o valor final das vendas:");
scanf("%f",& valor);
sal=sal+(com*car)+(valor*0.05);
printf("valor a receber:%.2f",sal);
getche ();
}
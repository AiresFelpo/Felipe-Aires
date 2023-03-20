#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    printf("hello world\n");

    float ano, mes, dia, total;

    printf("digite o ano que voce nasceu:");
    scanf("%f",&ano);

    printf("digite o mes (em numero):");
    scanf("%f",&mes);

    printf("digite o dia:");
    scanf("%f",&dia);

    if (ano<=1900 || ano>=2024 || mes>12 || mes<=0 || dia>=32 || dia<0)
    {
        printf("DATA INVALIDA");
        getche ();
    }
    else
    {
total=(365*(2023-ano)+30*(12-mes)+30-dia);
printf("%.0f",total);
}
getche ();
}
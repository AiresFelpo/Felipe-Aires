#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("hello world\n");
    float alt, larg, area;
    printf("digite a altura do retangulo:");
    scanf("%f",&alt);
    printf("digite a largura do retangulo:");
    scanf("%f",&larg);
area=alt*larg;
printf("area=%.2f",area);
fflush(stdin);
getche ();
}
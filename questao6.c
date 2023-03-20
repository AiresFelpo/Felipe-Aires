#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float sal, aju;
    printf("digite o salario:");
    scanf("%f", &sal);
    printf("digite o percentual de reajuste:%%");
    scanf("%f", &aju);

sal=((aju/100)+1)*sal;
printf("Salario final:%.2f",sal);
getche ();
}
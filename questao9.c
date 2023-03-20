#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float n1, n2, n3;
    printf("digite as notas do aluno:");
    scanf("%f%f%f", &n1, &n2, &n3);
    n1=(n1*2+n2*3+n3*5)/10;
    printf("media final:%.1f",n1);
    getche ();
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float a,b,c,r1,r2,del;
    printf("digite o A, B, C da equacao quadratica:");
    scanf("%f%f%f", &a, &b, &c);
    del=(b*b)-4*a*c;
    r1=(-b+(sqrt(del)))/2*a;
    r2=(-b-(sqrt(del)))/2*a;
    if (del<=0||a==0||b==0||c==0)
    {
        printf("impossivel calcular");
    }
    else
    {
        printf("R1=%f\n",r1);
    printf("R2=%f",r2);
    }
    getche ();
}
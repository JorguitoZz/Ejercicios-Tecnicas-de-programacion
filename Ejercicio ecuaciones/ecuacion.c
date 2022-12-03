#include <stdio.h>

int main(){
    double A, B, C, D, E, F, X, Y;

    printf("Introduzca el valor de A: ");
    scanf("%lf", &A);

    printf("Introduzca el valor de B: ");
    scanf("%lf", &B);

    printf("Introduzca el valor de C: ");
    scanf("%lf", &C);

    printf("Introduzca el valor de D: ");
    scanf("%lf", &D);

    printf("Introduzca el valor de E: ");
    scanf("%lf", &E);

    printf("Introduzca el valor de F: ");
    scanf("%lf", &F);

    X = (C*E*B*F)/(A*E*B*D);
    Y = (A*F*C*D)/(A*E*B*D);

    printf("El valor de X es %d \n\n", X);
    printf("El valor de Y es %d", Y);
}
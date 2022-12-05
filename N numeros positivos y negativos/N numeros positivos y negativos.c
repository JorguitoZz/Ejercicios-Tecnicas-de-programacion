#include <stdio.h>

int main(){

    int numero, positivo = 0, negativo = 0;
    printf("Introduzca el primer numero: ");
    scanf("%d", &numero);

    
    while (numero != 0)
    {
        if (numero > 0)
        {
            positivo += numero;
        }else{
            negativo += numero;
        }
        printf("Introduzca el siguiente numero si desea continuar o introduzca 0 para salir: ");
        scanf("%d", &numero);
    }
     
    if (numero == 0)
    {
        printf("La ejecucion del programa ha terminado");
        if (positivo != 0 || negativo != 0)
        {
            printf("la summmmmmmmmmmmat")
        }
        
        
    }
     

    return 0;
}
#include <stdio.h>

int main(){

    int numero, positivo = 0, negativo = 0;
    printf("Introduzca el primer numero positivo o negativo: ");
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
            printf("\n\n la suma de los numeros positivos es: %d \n y la suma de los negativos es: %d \n\n", positivo, negativo);
        }
        
        
    }
     

    return 0;
}
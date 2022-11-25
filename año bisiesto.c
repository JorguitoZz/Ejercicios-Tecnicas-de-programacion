#include <stdio.h>
int main(){
    int anyo;
    printf("Para comprobar si el año es bisiesto introduzca el año: ");
    scanf("%d", &anyo);
    
    if (anyo % 4 == 0)
    {
        if (anyo % 100 == 0)
        {
            if (anyo % 400 == 0)
            {
                printf("El año %d es bisiesto \n\n", anyo);
            }else{
                printf("El año %d no es bisiesto \n\n", anyo);
            }
            
        }else{
            printf("El año %d es bisiesto \n\n", anyo);
        }
    }
    return 0; 
}
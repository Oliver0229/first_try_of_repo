#include<stdio.h>
void numeroOndulado(int numero);
void menuCalculadora(int eleccion);

int main (){
    int eleccion;
    do{
    printf("\nBienvenido al menu \n");
    printf("Sleccione una opcion \n");
    printf("1- Numero ondulado \n");
    printf("2- Salir del menu \n");scanf("%d",&eleccion);
    menuCalculadora(eleccion);
    }while(eleccion!=2);


    return 0;
}

void numeroOndulado(int numero){
    int i,muestra,digito1,digito2,suma;
    suma=0;
    muestra=numero;
    while(numero>0){
        i=0;
        digito1=numero%10;
        numero/=10;
        digito2=numero%10;
        if (digito1 > digito2){
            i++;
        }
        if (digito1 < digito2){
            i+=2
        }
        if (digito1 == digito2){
           i+=0;
        }
        suma=i+0;
        
        
    }
    printf("Tu numero %d si es un numero ondulado", muestra);

}
void menuCalculadora (int eleccion){
    int numero;
    switch(eleccion){
        case 1:
        printf("Ingrese la cantidad de numero que quiere validar si es ondulado \n ");scanf("%d",&numero);
        if (numero>0){
            esOndulado(numero);
        }else{
            printf("Su numero ingresado no aplica");
        }
        break;
        case 2:
            printf("Salir del menu");
            break;
        default:
            printf("Opcion invalida");
            break;
    }
}
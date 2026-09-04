#include<stdio.h>
void numeroPrimo(int num);
void menuCalculadora (int eleccion);

int main (){
    int eleccion;
    do { 
    printf("Bienvenido al Menu de Selecciones \n");
    printf("Las opciones son las siguientes: \n");
    printf(" 1.- Numero Primo \n");
    printf(" 2.- Salir del menu \n "); scanf("%d",&eleccion);
    menuCalculadora(eleccion);
    } while(eleccion!=2);


    return 0;
}
void numeroPrimo (int num){
    int modulo,a=0;
    for (int i=1; i<=num; i++){
        modulo=num%i;
        if (modulo==0){
            a++;
        }
    }
    if(a==2){
        printf("Tu numero %d es un numero primo", num);
    }
    else{
        printf("Tu numero %d no es un numero primo", num);
      
    }
}
void menuCalculadora (int eleccion){
    int num;
    switch (eleccion){
        case 1: 
            printf("Ingrese el numero a evaluar: ");scanf("%d", &num);
            numeroPrimo(num);
            break;
        case 2:     
            printf(" 2.- Salir del menu \n ");
            break;
        default:
            printf("Opcion invalida \n ");
            break;
    }
}
#include<stdio.h>
void armstrong (int num); 
void menuCalculadora (int eleccion);

int main (){
    int eleccion;
    do {
    printf("Bienvenido al Menu de Selecciones \n");
    printf("Las opciones son las siguientes: \n");
    printf(" 1.- Numero de Armstrong \n");
    printf(" 2.- Salir del menu \n "); scanf("%d",&eleccion);
    menuCalculadora(eleccion);
    }while (eleccion != 2);


    return 0;
}
void armstorng (int num){
    int muestra=original=num, suma=0, i=0,v=0;
    while (num > 0){
        num/=10; i++;
    }
    while (original > 0){
        int termino=1;
        v=original%10; orignal/=10;
        for (int j=1; j <= i; j++){
            termino = termino * v;
        } 
        suma=suma+termino;
    }
    if(suma == muestra){
        printf("Tu numero %d si es un numero de armstrong", muestra);
    }
    else{
        printf("Tu numero %d no es un numero de armstrong", muestra);
    }
}
void menuCalculadora (int eleccion){
    int num; 
    switch (eleccion){
        case 1:
            printf("Ingrese el numero a evaluar: "); scanf("%d",&num);
            armstrong(num);
            break;
        case 2: 
            printf("Salir del menu");
            break;
        default:
            printf("Seleccion invalida");
            break;
    }
}
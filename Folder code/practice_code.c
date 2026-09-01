#include <stdio.h>
int esPrimo(int n);
int sumDivisores(int m);
int n,m, opcion;
int main(){

    
    do{
        printf("elige una opcion:\n");
        printf("1. verificar si un numero es primo\n");
        printf("2. calcular la suma de los divisores de un numero\n");
        printf("3. salir\n");
        scanf("%d", &opcion);

        switch (opcion){
            case 1:
                printf("ingresa un numero:  ");
                scanf("%d", &n);
                if(esPrimo(n)){
                    printf("el numero %d es primo", n);
                }
                else{
                    printf("el numero %d no es primo", n);
                }
                break;
            case 2:
                printf("ingresa un numero:  ");
                scanf("%d", &m);
                printf("la suma de los divisores de %d es: %d", m, sumDivisores(m));
                break;
            case 3:
                printf("saliendo del programa...");
                break;
        }

    } while (opcion != 3);

    return 0;
}

int esPrimo(int n){
    int contador=0;
    for(int i=1; i<=n; i++){
        if(n%i==0){
            contador++;
        }
    }
    if (contador==2){
        return 1;
    }
    else{
        return 0;
    }

int sumDivisores(int m){
    int suma=0;
    for(int i=1; i<=m; i++){
        if(m%i==0){
            suma = suma + i;
        }
    }
    return suma;
}
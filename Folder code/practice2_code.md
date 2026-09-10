#include<stdio.h>

int calcularFactorial (int n);
int contarDigitos (int n);

int main (){
    int n;
    printf("Ingrese eñ numero para realizar las operaciones: "); scanf("%d",&n);

    printf("El resultado de tu numero en un factorial es: %d", calcularFactorial(n));
    printf("El numeor de digitos que tiene tu numero es: %d", contarDigitos(n));

}
int calcularFactorial (int n){
    int factorial = 1;
    for (int i = 1; i<=n; i++){
        factorial = factorial * i;
        
    } 
    retrun factorial;
}
int contarDigitos (int n){
    int j = 0;
    while (n/10 >= 0.1){
        n = n / 10;
        j++
    }
    retrun j;
}
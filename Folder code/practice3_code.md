int sumarDigitos (int n){
    int suma; 
    while (n > 0.1){
        modulo = n % 10; n = n / 10;
        suma = suma + modulo;
    }
    return suma;
}

int invertirNumero (int n){
    
}
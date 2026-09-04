#include<stdio.h>
float CalIntereses (float capital, float intereses, int meses);
int añoBisiesto (int año);
void evaluarPresupuesto (float ingreso, float gasto);


int main (){
    int opcion,año,meses;
    float ingreso,gasto,capital,intereses;
    do{
        printf("elige una opcion:\n");
        printf("1. calcula intereses\n");
        printf("2. dice si es año bisiesto\n");
        printf("3. evalua tus gastos\n");
        printf("4. salir\n");
        scanf("%d", &opcion);

        switch (opcion){
            case 1:
                printf(¨Ingresa tu capital: ¨);
                scanf(¨%f¨, &capital);
                printf(¨Ingresa tu tasa: ¨);
                scanf(¨%f¨, &intereses);
                printf(¨Ingresa tus meses: ¨);
                scanf(¨%d¨, &meses);
                printf(¨Tu monto total con interes es de: %f¨, CalIntereses(capital,intereses,meses));
                break;

            case 2:
                printf(¨Ingresa tu el año a evaluar: ¨);
                scanf(¨%d¨, &año);
                printf(¨1 = año bisiesto y 0 = no es año bisiesto, tu resultado es = %d ¨, añoBisiesto(año));
                break;

            case 3:
                printf(¨Ingresa tus ingresos: ¨);
                scanf(¨%f¨, &ingreso);
                printf(¨Ingresa tus gastos: ¨);
                scanf(¨%f¨, &gasto);
                evaluarPresupuesto(ingreso,gasto);
                break;
            
            case 4:
                printf(¨El programa se termino¨);
                break;

            default:
                printf(¨Seleccion invalida¨);
                break;
        }

    }

    return 0;
}

float CalIntereses (float capital, float intereses, int meses){
    float resultado = 0;
    resultado = (capital * (interes/100) * meses) + capital;
    return resultado;
}

int añoBisiesto (int año){
    int info;
    if (año>400){
        if(año%4==0 && año%400==0){
            info = 1;
        }
        else if(año%4==0 && año%100!=0){
            info = 1;
        }
        else {
            info = 0;
        }
    }
    else{
        if(año%4==0 && año%100!=0){
            info = 1;
        }
        else {
            info = 0;
        }

    }
    return info;
}

void evaluarPresupuesto (float ingreso, float gasto){
    if (gasto>ingreso)
    {
        printf(¨Alerta de deficit financiero¨);
    }
    else{
        float resto,porcentaje;
        resto = ingreso - gasto;
        porcentaje = (resto/gasto) * 100;

    }
}


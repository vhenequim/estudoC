#include <stdio.h>
#include <math.h>
#include <stdbool.h>


int main () {
    float vel_inicial, desnivel;
    bool input_vel_inicial = false;
    bool input_desnivel = false; 
    while (input_vel_inicial == false){
        printf("\nInsira uma velocidade: ");
        scanf ("%f", &vel_inicial);
        if (vel_inicial >= 50 && vel_inicial <= 1000){
            input_vel_inicial = true;
        }
        else{
            printf("Valor incompativel, faca novamente");
        }
    }
    while (input_desnivel == false){
        printf("\nInsira um desnivel: ");
        scanf ("%f", &desnivel);
        if (desnivel >= -400 && desnivel <= 400){
            input_desnivel = true;
        }
        else{
            printf("Valor incompativel, faca novamente");
        }
    }
    bool resultado_real = false;
    float resultado, i, j; // para definir qual será o maior durante as iterações
    float resultado_global;
    for (j = 30; j = 60; j += 0.1){
        float delta, a, b, c;
        i = (j*3.14159265358979323846)/180;
        a = (9.81/(2*pow(vel_inicial, 2)*cos(i)*cos(i)));
        b = -tan(i);
        c = desnivel;
        delta = pow(b,2) - 4*a*c;
        if (delta >= 0){
            resultado = (-b + sqrt(delta))/2*a;
            if (resultado >= resultado_global){
                resultado_global = resultado;
            }
            resultado_real = true;
        }
    }
    printf ("%f", resultado_global);

}
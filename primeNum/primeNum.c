#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    int n, i;
    
    int prime[50] = {0};
    int contador = 2;

    bool Primo;

    prime[0]=2;
    prime[1]=3;     //Primeiros primos

    for (n=5; n < 100; n = n + 2){
        Primo = true;
        for (i = 1; Primo && n / prime[i] >= prime[i]; i++){
            if (n % prime[i] == 0)
                Primo = false;
        }
        if ( Primo == true ){
            prime[contador] = n;
            contador++;
        }
    }
    for (i = 0; i < contador; i++)
        printf ("%d\t", prime[i]);

}
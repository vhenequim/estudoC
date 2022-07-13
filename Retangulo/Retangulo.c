#include <stdio.h>
#include <stdlib.h>

// Essa função calcula o perimetro e a area de um retangulo

int main (int argc, char *argv[]) {
    //Definindo parametros
    double perimeter, area;
    double width = atoi(argv[1]);
    double height = atoi(argv[2]);
    //Calculos
    perimeter=2*(width+height);
    area=width*height;
    //Condicional da validade dos números utilizados (Não faz sentido comprimento nulo e não existe medida negativa)
    if ((width&&height)!= 0 && (width>0) && (height>0))
    {
        printf("Perimeter: %lf\nArea: %lf", perimeter, area);
    }
    else
        printf("Numeros invalidos");
    return 0;
}



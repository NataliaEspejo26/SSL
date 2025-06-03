// TablasDeConversion.c
#include <stdio.h>
#include "Conversion.h"

void imprimirTablas();
void imprimirFaCel();
void imprimirCelFa();

int main(void) {
    imprimirTablas();
    return 0;
}

void imprimirTablas (){
    imprimirFaCel();
    imprimirCelFa();
}

void imprimirFaCel () {
    const int LOWER = 0;
    const int UPPER = 300;
    const int STEP = 20;

    printf("Tabla de Fahrenheit a Celsius\n");
    for (int f = LOWER; f <= UPPER; f += STEP) {
        printf("%3d %6.1f\n", f, Celsius(f));
    }
}
void imprimirCelFa(){
    const int LOWER = 0;
    const int UPPER = 300;
    const int STEP = 20;

    printf("\nTabla de Celsius a Fahrenheit\n");
    for (int c = LOWER; c <= UPPER; c += STEP) {
        printf("%3d %6.1f\n", c, Fahrenheit(c));
    }
}
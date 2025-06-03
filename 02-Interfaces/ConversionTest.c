#include <assert.h>
#include <stdio.h>
#include "Conversion.h"

// Define un margen de error pequeño para comparar doubles ya que no se pueden comparar double ni float con ==
const double margenError = 0.0001;

int casiIgual(double a, double b) ;

int main() {
    // Probar Fahrenheit -> Celsius
    assert(casiIgual(Celsius(32), 0.0));

    assert(casiIgual(Celsius(0), -17.7778));

    // Probar Celsius -> Fahrenheit
    assert(casiIgual(Fahrenheit(0), 32.0));

    assert(casiIgual(Fahrenheit(-17.7778), 0.0));
    //Mas pruebas
    printf("Todas las pruebas pasaron correctamente.\n");

    return 0;
}

// Función que devuelve 1 si a y b son casi iguales dentro de margenError
int casiIgual(double a, double b) {
    return (a - b < margenError) && (b - a < margenError);  // Calculo valor absoluto a - b y chequeo que sea menor al margenError ( |a-b| < margenError )
}
#include "Conversion.h"
double Celsius(double f){
 return (5.0/9.0)*(f-32);
}

double Fahrenheit(double c){
 return (9.0 / 5.0) * c + 32;
}
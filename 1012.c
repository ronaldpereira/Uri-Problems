/*
* Author : Ronald Pereira
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 2 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
*/

#include <stdio.h>
 
int main(){
    double A, B, C, triangulo, circulo, pi = 3.14159, trapezio, quadrado, retangulo;    
 
    scanf("%lf%lf%lf", &A, &B, &C);
 
    triangulo = (A * C) / 2;
    circulo = pi * (C * C);
    trapezio = (A + B) * C / 2;
    quadrado = B * B;
    retangulo = A * B;
 
    printf("TRIANGULO: %.3lf\n", triangulo);
    printf("CIRCULO: %.3lf\n", circulo);
    printf("TRAPEZIO: %.3lf\n", trapezio);
    printf("QUADRADO: %.3lf\n", quadrado);
    printf("RETANGULO: %.3lf\n", retangulo);
 
return 0;
}

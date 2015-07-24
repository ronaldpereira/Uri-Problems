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
#include <math.h>
 
int main(){
    double a, b, c, x1, x2;
 
    scanf("%lf%lf%lf", &a, &b, &c);
 
    if ( a == 0 || (b * b - 4 * a * c) < 0 ){
        printf("Impossivel calcular\n");
    }
 
    else {
    x1 = (-b + sqrt(b * b - 4 * a * c)) / ( 2 * a );
    x2 = (-b - sqrt(b * b - 4 * a * c)) / ( 2 * a );
 
    printf("R1 = %.5lf\nR2 = %.5lf\n", x1, x2);
    }
return 0;
}

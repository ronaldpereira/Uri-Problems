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
#include <stdlib.h>
#include <math.h>
 
int main(){
 
    double a, b, c;
    int x;
    double lado;
 
    while(1){
    scanf("%lf", &a);
 
    if(a == 0)
        break;
 
    scanf("%lf %lf", &b, &c);
 
    x = (int)(a*b);
 
    lado = floor(sqrt((x)*(100/c)));
 
    printf("%.0lf\n", lado);
    }
return 0;
}

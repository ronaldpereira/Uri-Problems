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
 
void cpf(int d1, int d2, int d3, int d4, int d5, int d6, int d7, int d8, int d9){
 
    int d10, d11;
    int v1, v2;
 
 
 
    d10 = ((d1 * 1) + (d2 * 2) + (d3 * 3) + (d4 * 4) + (d5 * 5) + (d6 * 6) + (d7 * 7) + (d8 * 8) + (d9 * 9)) % 11;
 
    if(d10 == 10)
        d10 = 0;
 
 
    d11 = ((d1 * 9) + (d2 * 8) + (d3 * 7) + (d4 * 6) + (d5 * 5) + (d6 * 4) + (d7 * 3) + (d8 * 2) + (d9 * 1)) % 11;
 
    if(d11 == 10)
        d11 = 0;
 
 
    printf("%d%d%d.%d%d%d.%d%d%d-%d%d\n",d1,d2,d3,d4,d5,d6,d7,d8,d9,d10,d11);
 
}
 
 
 
int main(){
 
    int d;
    int d1, d2, d3, d4, d5, d6, d7, d8, d9;
    int resto;
 
    while(scanf("%d", &d) != EOF){
        d1 = d / 100000000;
        resto = d - (d1 * 100000000);
        d2 = resto / 10000000;
        resto = resto - (d2 * 10000000);
        d3 = resto / 1000000;
        resto = resto - (d3 * 1000000);
        d4 = resto / 100000;
        resto = resto - (d4 * 100000);
        d5 = resto / 10000;
        resto = resto - (d5 * 10000);
        d6 = resto / 1000;
        resto = resto - (d6 * 1000);
        d7 = resto / 100;
        resto = resto - (d7 * 100);
        d8 = resto / 10;
        resto = resto - (d8 * 10);
        d9 = resto;
        cpf(d1,d2,d3,d4,d5,d6,d7,d8,d9);
    }
 
return 0;
}

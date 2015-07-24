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
 
int main(){
 
    int m[2][5];
    int contador = 0;
    int i, j;
 
    for(i = 0; i < 2; i++){
        for(j = 0; j < 5; j++){
            scanf("%d", &m[i][j]);
        }
    }
 
 
    for(j = 0; j < 5; j++){
        for(i = 0; i < 1; i++){
            if(m[i][j] != m[i+1][j]){
                contador++;
            }
        }
    }
 
    if(contador == 5)
        printf("Y\n");
 
    else
        printf("N\n");
 
return 0;
}

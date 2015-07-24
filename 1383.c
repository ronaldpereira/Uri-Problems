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
 
    int i, j, n = 9, k, teste, c;
 
    int **sud = (int **) malloc (81 * sizeof(int));
 
    scanf("%d", &teste);
 
    for(c = 0; c < teste; c++){
 
        int soma = 0;
        int count = 0;
 
        for(i = 0; i < n; i++){
            sud[i] = (int *) malloc (81 * sizeof(int));
            for(j = 0; j < n; j++)
                scanf("%d", &sud[i][j]);
        }
 
 
        for(k = 0; k < n; k++){
            for(i = 0; i < n; i++){
                soma += sud[i][k];
                    if(i == (n-1)){
                        if(soma == 45){
                        count++;
                        soma = 0;
                        }
 
                        else if(soma != 45){
                        count += 2;
                        soma = 0;
                        }
                    }
                }
            }
 
 
         for(k = 0; k < n; k++){
            for(i = 0; i < n; i++){
                soma += sud[k][i];
                    if(i == (n-1)){
                        if(soma == 45){
                        count++;
                        soma = 0;
                        }
 
                        else if(soma != 45){
                        count += 10;
                        soma = 0;
                        }
                    }
                }
            }
 
            for(i = 0; i < 3; i++){
                for(j = 0; j < 3; j++){
                    soma += sud[i][j];
                        if(soma != 45)
                            count += 10;
                }
            }
 
            soma = 0;
 
            for(i = 3; i < 6; i++){
                for(j = 0; j < 3; j++){
                    soma += sud[i][j];
                        if(soma != 45)
                            count += 10;
                }
            }
 
            soma = 0;
 
            for(i = 6; i < 9; i++){
                for(j = 0; j < 3; j++){
                    soma += sud[i][j];
                        if(soma != 45)
                            count += 10;
                }
            }
            soma = 0;
 
            for(i = 0; i < 3; i++){
                for(j = 3; j < 6; j++){
                    soma += sud[i][j];
                        if(soma != 45)
                            count += 10;
                }
            }
            soma = 0;
 
            for(i = 3; i < 6; i++){
                for(j = 3; j < 6; j++){
                    soma += sud[i][j];
                        if(soma != 45)
                            count += 10;
                }
            }
 
            soma = 0;
 
            for(i = 6; i < 9; i++){
                for(j = 3; j < 6; j++){
                    soma += sud[i][j];
                        if(soma != 45)
                            count += 10;
                }
            }
 
            soma = 0;
 
            for(i = 0; i < 3; i++){
                for(j = 6; j < 9; j++){
                    soma += sud[i][j];
                        if(soma != 45)
                            count += 10;
                }
            }
 
            soma = 0;
 
            for(i = 3; i < 6; i++){
                for(j = 6; j < 9; j++){
                    soma += sud[i][j];
                        if(soma != 45)
                            count += 10;
                }
            }
 
            soma = 0;
 
            for(i = 6; i < 9; i++){
                for(j = 6; j < 9; j++){
                    soma += sud[i][j];
                        if(soma != 45)
                            count += 10;
                }
            }
 
            soma = 0;
 
            if(count == 738){
                printf("Instancia %d\nSIM\n\n",(c+1));
            }
 
            else{
                printf("Instancia %d\nNAO\n\n",(c+1));
            }
 
    }
 
return 0;
}

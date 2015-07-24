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
#include <string.h>
 
int main(){
 
    char alfabeto[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char *str1 = (char*) malloc(10000 * sizeof(char));
    char *str2 = (char*) malloc(10000 * sizeof(char));
 
    int t, c, i, j, m, k, l, n, soma;
 
    scanf("%d", &t);
 
    for(c = 0; c < t; c++){
 
    soma = 0;
    m = 0;
    l = 0;
    n = 0;
 
    scanf("%s", str1);
    scanf("%s", str2);
 
    int vet1[strlen(str1)], vet2[strlen(str2)];
 
        for(i = 0; i < strlen(str1); i++){
            for(k = 0; k < 26; k++){
                if(str1[i] == alfabeto[k]){
                    vet1[l] = k;
                    l++;
                }
            }
        }
 
        for(i = 0; i < strlen(str2); i++){
            for(k = 0; k < 26; k++){
                if(str2[i] == alfabeto[k]){
                    vet2[n] = k;
                    n++;
                }
            }
        }
 
        for(i = 0; i < strlen(str1); i++){
                if(vet2[i] >= vet1[i])
            soma += (vet2[i] - vet1[i]);
 
                else if(vet2[i] < vet1[i])
            soma += ((vet2[i] + 26) - vet1[i]);
        }
 
        printf("%d\n", soma);
    }
 
return 0;
}

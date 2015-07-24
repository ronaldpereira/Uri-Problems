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
 
long long int fatorial(long long int n){
     
    long long int fatn = 1;
 
    for(; n > 1; --n)
        fatn *= n;
 
return fatn;
}
 
int main(){
 
    long long int x, y;
    long long int soma;
     
     while(scanf("%lld %lld", &x, &y) != EOF){
     
    soma = fatorial(x) + fatorial(y); 
 
    printf("%lld\n", soma);
    }
     
return 0;
}

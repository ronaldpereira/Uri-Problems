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
 
    int a, g, d, escolha;
    int soma_a = 0, soma_g = 0, soma_d = 0;
     
    while(1){
     
        scanf("%d", &escolha);
         
        if(escolha == 4)
            break;
             
        while(escolha < 1 || escolha > 4)
            scanf("%d", &escolha);
             
        if(escolha == 1)
            soma_a ++;
             
        else if(escolha == 2)
            soma_g ++;
             
        else if(escolha == 3)
            soma_d ++;
             
    }
     
    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", soma_a, soma_g, soma_d);
     
return 0;
}

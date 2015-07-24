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
 
    int teste, c;
 
    scanf("%d", &teste);
 
    for(c = 0; c < teste; c++){
 
        int x, y;
 
        scanf("%d %d", &x, &y);
 
        int r, b, c;
 
        r = ((9 * x * x) + (y * y));
        b = (2 * (x * x) + (25 * y * y));
        c = ((-100 * x) + (y * y * y));
 
        if(r > b && r > c)
            printf("Rafael ganhou\n");
 
        else if(b > r && b > c)
            printf("Beto ganhou\n");
 
        else if(c > r && c > b)
            printf("Carlos ganhou\n");
 
    }
 
return 0;
}

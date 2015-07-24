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
 
    int n, c, x, p, m = 0;
     
    scanf("%d", &n);
     
    for(c = 0; c < n; c++){
     
        scanf("%d", &x);
         
        for(p = 2; p < x; p++){
            if(x % p == 0)
                m++;
        }
         
        if(m > 0)
            printf("%d nao eh primo\n", x);
             
        else if(m == 0)
            printf("%d eh primo\n", x);
         
        m = 0;
         
    }
             
return 0;
}

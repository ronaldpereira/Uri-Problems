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
 
int Is_TwoPower(int x){
 
    int m, i = 0;
 
    for(m = 1; i <= x;){
        i = pow(2,m);
        m++;
 
    if(i == x)
        return 1;
    }
 
    if(i != x)
        return 0;
 
 
}
 
int main (){
 
    int m, n = 1, r, ptr = 0, u, ptu = 0, i, pti = 0;
 
    while(1){
 
        scanf("%d", &n);
 
 
        if(n == 0)
            break;
 
 
    for(m = 0; m < n; m++){
 
        scanf("%d %d %d", &u, &r, &i);
 
        if(Is_TwoPower(u) == 1){
            ptu++;
            if(u > r && u > i)
                ptu++;
        }
 
        if(Is_TwoPower(r) == 1){
            ptr++;
                if(r > u && r > i)
                ptr++;
        }
 
        if(Is_TwoPower(i) == 1){
            pti++;
                if(i > u && i > r)
                pti++;
        }
 
 
    }
 
        if(ptu > ptr && ptu > pti)
        printf("Uilton\n");
 
    else if(ptu > pti && ptu > ptr)
        printf("Uilton\n");
 
        if(ptr > ptu && ptr > pti)
        printf("Rita\n");
 
    else if(ptr > pti && ptr > ptu)
        printf("Rita\n");
 
        if(pti > ptu && pti > ptr)
        printf("Ingred\n");
 
    else if(pti > ptr && pti > ptu)
        printf("Ingred\n");
 
        if(ptu == ptr && ptr >= pti)
        printf("URI\n");
 
        else if(ptu == pti && pti >= ptr)
        printf("URI\n");
 
        else if(ptr == pti && pti >= ptu)
        printf("URI\n");
 
 
    ptu = 0;
    ptr = 0;
    pti = 0;
 
    }
 
 
return 0;
}

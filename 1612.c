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
    int t, i;
    double n;
 
    scanf("%d",&t);
 
    for(i = 0; i < t; i++){
        scanf("%lf", &n);
        n = (n/2);
        printf("%.0lf\n", ceil(n));
    }
 
return 0;
}

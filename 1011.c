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
    int raio;
    double pi = 3.14159, volume;
 
    scanf("%d", &raio);
     
    volume = ((4.0/3) * pi);
 
    printf("VOLUME = %.3lf\n", volume * raio * raio * raio);
 
return 0;
}

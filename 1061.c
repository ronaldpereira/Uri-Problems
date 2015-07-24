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
 
int transforma(dia, hora, minuto, segundo){
 
    int total_s;
 
    total_s = segundo + (60 * minuto) + (3600 * hora) +  (86400 * dia);
 
return total_s;
}
 
void retransforma(tot){
 
    int dia, hora, minuto, segundo;
 
    dia = (tot / 86400);
    tot -= (dia * 86400);
    hora = (tot / 3600);
    tot -= (hora * 3600);
    minuto = (tot / 60);
    tot -= (minuto * 60);
    segundo = tot;
 
printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", dia, hora, minuto, segundo);
 
}
 
int main(){
 
    int di, hi, mi, si;
    int df, hf, mf, sf;
    int dt, ht, mt, st;
    int in, fn, tot;
    char lixo[5];
 
    scanf("%s%d",lixo, &di);
    scanf("%d %s %d %s %d", &hi, lixo, &mi, lixo, &si);
    scanf("%s%d",lixo, &df);
    scanf("%d %s %d %s %d", &hf, lixo, &mf, lixo, &sf);
 
    in = transforma(di,hi,mi,si);
    fn = transforma(df,hf,mf,sf);
 
    tot = fn - in;
 
    retransforma(tot);
 
return 0;
}

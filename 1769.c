#include <stdio.h>
#include <stdlib.h>
 
void cpf(int dd1, int dd2, int dd3, int dd4){
 
    int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11;
    int resto, v1, v2;
 
    d1 = dd1 / 100;
    resto = dd1 - (d1 * 100);
    d2 = resto / 10;
    resto = resto - (d2 * 10);
    d3 = resto;
 
    d4 = dd2 / 100;
    resto = dd2 - (d4 * 100);
    d5 = resto / 10;
    resto = resto - (d5 * 10);
    d6 = resto;
 
    d7 = dd3 / 100;
    resto = dd3 - (d7 * 100);
    d8 = resto / 10;
    resto = resto - (d8 * 10);
    d9 = resto;
 
    d10 = dd4 / 10;
    resto = dd4 - (d10 * 10);
    d11 = resto;
 
    v1 = ((d1 * 1) + (d2 * 2) + (d3 * 3) + (d4 * 4) + (d5 * 5) + (d6 * 6) + (d7 * 7) + (d8 * 8) + (d9 * 9)) % 11;
 
    if(v1 == 10)
        v1 = 0;
 
 
    v2 = ((d1 * 9) + (d2 * 8) + (d3 * 7) + (d4 * 6) + (d5 * 5) + (d6 * 4) + (d7 * 3) + (d8 * 2) + (d9 * 1)) % 11;
 
    if(v2 == 10)
        v2 = 0;
 
 
    if(d10 == v1 && d11 == v2)
        printf("CPF valido\n");
 
    else
        printf("CPF invalido\n");
 
}
 
 
 
int main(){
 
    int dd1,dd2,dd3,dd4;
    char dots;
    int i;
 
    while(scanf("%d%c%d%c%d%c%d", &dd1, &dots, &dd2, &dots, &dd3, &dots, &dd4) != EOF)
    cpf(dd1,dd2,dd3,dd4);
 
return 0;
}

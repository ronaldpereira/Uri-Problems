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
 
double soma(double **mat){
 
        double soma = 0;
 
        soma = (mat[11][1] + mat[11][2] + mat[11][3] + mat[11][4] + mat[11][5] + mat[11][6] + mat[11][7] + mat[11][8] + mat[11][9] +
                mat[11][10] + mat[11][11] + mat[10][2] + mat[10][3] + mat[10][4] + mat[10][5] + mat[10][6] + mat[10][7] + mat[10][8] +
                mat[10][9] + mat[10][10] + mat[10][11] + mat[9][3] + mat[9][4] + mat[9][5] + mat[9][6] + mat[9][7] + mat[9][8] +
                mat[9][9] + mat[9][10] + mat[9][11] + mat[8][4] + mat[8][5] + mat[8][6] + mat[8][7] + mat[8][8] + mat[8][9] +
                mat[8][10] + mat[8][11] + mat[7][5] + mat[7][6] + mat[7][7] + mat[7][8] + mat[7][9] + mat[7][10] + mat[7][11] +
                mat[6][6] + mat[6][7] + mat[6][8] + mat[6][9] + mat[6][10] + mat[6][11] + mat[5][7] + mat[5][8] + mat[5][9] +
                mat[5][10] + mat[5][11] + mat[4][8] + mat[4][9] + mat[4][10] + mat[4][11] + mat[3][9] + mat[3][10] + mat[3][11] +
                mat[2][10] + mat[2][11] + mat[1][11]);
 
 
return soma;
}
 
 
int main (){
 
        int i, j, n = 12;
 
        double **mat = (double **) malloc (144 * sizeof(double));
 
        char op;
 
        scanf("%c", &op);
 
 
        for(i = 0; i < n; i++){
                mat[i] = (double *) malloc (144 * sizeof(double));
                for(j = 0; j < n; j++)
                        scanf("%lf", &mat[i][j]);
        }
 
        if(op == 'S')
                printf("%.1lf\n", soma(mat));
 
        else if(op == 'M')
                printf("%.1lf\n", (soma(mat)/66.0));
 
 
        for(i = 0; i < n; i++)
                free(mat[i]);
 
        free(mat);
 
return 0;
}

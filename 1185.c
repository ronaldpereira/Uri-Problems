#include <stdio.h>
#include <stdlib.h>

double soma(double **mat){

        double soma = 0;

        soma = (mat[0][0] + mat[0][1] + mat[0][2] + mat[0][3] + mat[0][4] + mat[0][5] + mat[0][6] + mat[0][7] + mat[0][8] +
                mat[0][9] + mat[0][10] + mat[1][0] + mat[1][1] + mat[1][2] + mat[1][3] + mat[1][4] + mat[1][5] + mat[1][6] +
                mat[1][7] + mat[1][8] + mat[1][9] + mat[2][0] + mat[2][1] + mat[2][2] + mat[2][3] + mat[2][4] + mat[2][5] +
                mat[2][6] + mat[2][7] + mat[2][8] + mat[3][0] + mat[3][1] + mat[3][2] + mat[3][3] + mat[3][4] + mat[3][5] +
                mat[3][6] + mat[3][7] + mat[4][0] + mat[4][1] + mat[4][2] + mat[4][3] + mat[4][4] + mat[4][5] + mat[4][6] +
                mat[5][0] + mat[5][1] + mat[5][2] + mat[5][3] + mat[5][4] + mat[5][5] + mat[6][0] + mat[6][1] + mat[6][2] +
                mat[6][3] + mat[6][4] + mat[7][0] + mat[7][1] + mat[7][2] + mat[7][3] + mat[8][0] + mat[8][1] + mat[8][2] +
                mat[9][0] + mat[9][1] + mat[10][0]);


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

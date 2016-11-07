#include <stdio.h>
#define n 12

float media_soma(float m[][n], int coluna, char op){

    float resultado = 0;
    int i;

    if(op == 'S'){

        for(i = 0; i < n; i++)
            resultado += m[i][coluna];


    }

    else if(op == 'M'){

        for(i = 0; i < n; i++){
            resultado += m[i][coluna];

        }
            resultado /= n;
    }

return resultado;
}

int main(){

    float m[n][n];
    int coluna, i, j;
    char op;

    scanf("%d", &coluna);
    scanf(" %c", &op);

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++)
            scanf("%f", &m[i][j]);
    }

    printf("%.1f\n", media_soma(m, coluna, op));

return 0;
}

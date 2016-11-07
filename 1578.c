#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void espacos(int num){
        int i;
        for(i = 0; i < num; i++){
            printf(" ");
        }
}

int numeroDigitos(unsigned long long int numero){
        int digitos = 1;

        while(numero > 9){
            numero /= 10;
            digitos++;
        }

return digitos;
}


int main(){

        int teste, i, j, m, n;
        unsigned long long int matriz[20][20], maior[20];

    memset(maior, 0, sizeof(maior));

        scanf("%d", &n);

        for(teste = 0; teste < n; teste++){

            scanf("%d", &m);

            for(j = 0; j <= 20; j++)
                maior[j] = 0;

            for(i = 0; i < m; i++){
                    for(j = 0; j < (m-1); j++){
                        scanf("%llu", &matriz[i][j]);

                        matriz[i][j] = (matriz[i][j] * matriz[i][j]);

                            if(maior[j] < matriz[i][j])
                                maior[j] = matriz[i][j];
                    }
                        scanf("%llu", &matriz[i][m]);

                        matriz[i][j] = matriz[i][m] * matriz[i][m];

                            if(maior[j] < matriz[i][j])
                                maior[j] = matriz[i][j];
            }
            if((teste + 4) > 4)
                printf("\n");

        printf("Quadrado da matriz #%d:\n", (teste+4));

            for(i = 0; i < m; i++){
                    for(j = 0; j < (m-1); j++){
                        espacos(numeroDigitos(maior[j]) - numeroDigitos(matriz[i][j]));

                        printf("%llu ", matriz[i][j]);
                    }
                        espacos(numeroDigitos(maior[j]) - numeroDigitos(matriz[i][j]));

                        printf("%llu", matriz[i][j]);
                        printf("\n");
            }
        }

return 0;
}

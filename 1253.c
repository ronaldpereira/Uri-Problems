#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char alfabeto[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char *str1 = (char*) malloc(50 * sizeof(char));
    int v[50];

    int i, j, l, k, teste, c, num;

    scanf("%d", &teste);

    for(c = 0; c < teste; c++){

        scanf(" %s", str1);
        scanf("%d", &num);

        l = 0;

        for(i = 0; i < (int)strlen(str1); i++){
            for(j = 0; j <= 26; j++){
                if(str1[i] == alfabeto[j]){
                    v[l] = j;
                    l++;
                }
            }
        }

        for(k = 0; k <= l; k++){
            if(v[k] >= num)
                v[k] -= num;

            else if(v[k] < num)
                v[k] = (v[k] + 26) - num;
        }

        for(k = 0; k < l; k++){
            for(j = 0; j <= 26; j++){
                if(j == v[k]){
                        printf("%c", alfabeto[j]);
                }
            }
        }
        printf("\n");


    }

return 0;
}

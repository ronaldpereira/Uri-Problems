#include <stdio.h>
#include <stdlib.h>

int main(){

    int escolha;
    int soma_a = 0, soma_g = 0, soma_d = 0;

    while(1){

        scanf("%d", &escolha);

        if(escolha == 4)
            break;

        while(escolha < 1 || escolha > 4)
            scanf("%d", &escolha);

        if(escolha == 1)
            soma_a ++;

        else if(escolha == 2)
            soma_g ++;

        else if(escolha == 3)
            soma_d ++;

    }

    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", soma_a, soma_g, soma_d);

return 0;
}

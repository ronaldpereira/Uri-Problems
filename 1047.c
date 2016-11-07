#include <stdio.h>
#include <stdlib.h>

int main(){

    int ho, mo, hf, mf, h, m;

    scanf("%d %d %d %d", &ho, &mo, &hf, &mf);

    if(hf > ho && mf > mo){
        h = (hf - ho);
        m = (mf - mo);
    }

    else if(hf == ho && mf > mo){
        h = 0;
        m = (mf - mo);
    }

    else if(hf == ho && mf < mo){
        h = 23;
        m = ((60 + mf) - mo);
    }

    else if(hf > ho && mf == mo){
        h = (hf - ho);
        m = 0;
    }

    else if(hf > ho && mf < mo){
        h = (hf - ho);
        m = ((60 + mf) - mo);
        h--;
    }

    else if(hf < ho && mf < mo){
        h = ((24 + hf) - ho);
        m = ((60 + mf) - mo);
        h--;
    }

    else if(hf == ho && mf == mo){
        h = 24;
        m = 0;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);

return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int transforma(int dia, int hora, int minuto, int segundo){

    int total_s;

    total_s = segundo + (60 * minuto) + (3600 * hora) +  (86400 * dia);

return total_s;
}

void retransforma(int tot){

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

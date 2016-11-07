#include <stdio.h>

int main(){

    int cem, cinquenta, vinte, dez, cinco, dois, um, cinq, vint, dz, cinc, mum;
    double total;

    scanf("%lf", &total);

    cem = total / 100.0;
    total -= ( cem * 100.0 );
    cinquenta = total / 50.0;
    total-= ( cinquenta * 50.0 );
    vinte = total / 20.0;
    total -= ( vinte * 20.0 );
    dez = total / 10.0;
    total -= ( dez * 10.0 );
    cinco = total / 5.0;
    total -= ( cinco * 5.0 );
    dois = total / 2.0;
    total -= ( dois * 2.0 );
    um = total / 1.0;
    total -= ( um * 1.0 );
    cinq = total / 0.50;
    total -= ( cinq * 0.50 );
    vint = total / 0.25;
    total -= ( vint * 0.25 );
    dz = total / 0.10;
    total -= ( dz * 0.10 );
    cinc = total / 0.05;
    total -= ( cinc * 0.05 );
    mum = total / 0.01;

    printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\nMOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n", cem, cinquenta, vinte, dez, cinco, dois, um, cinq, vint, dz, cinc, mum);

return 0;
}

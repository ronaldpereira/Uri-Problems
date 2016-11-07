#include <stdio.h>

int main(){

    int e, d, soma;

    while(1){

    scanf("%d %d", &e, &d);

    if(e == 0 && d == 0)
       break;

    soma = e + d;

    printf("%d\n", soma);
    }
return 0;
}

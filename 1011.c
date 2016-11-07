#include <stdio.h>

int main(){
    int raio;
    double pi = 3.14159, volume;

    scanf("%d", &raio);

    volume = ((4.0/3) * pi);

    printf("VOLUME = %.3lf\n", volume * raio * raio * raio);

return 0;
}

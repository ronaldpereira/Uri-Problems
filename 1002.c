#include <stdio.h>
 
int main(){
 
    double pi, raio, a;
 
    scanf("%lf", &raio);
 
    pi = 3.14159;
 
    a = pi * (raio * raio);
 
    printf("A=%.4lf\n", a);
 
    return 0;
 
}

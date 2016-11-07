#include <iostream>
#include <cstdio>
#include <stdlib.h>

using namespace std;

int main(){

    double raio, pi = 3.14159;

    cin >> raio;

    double area = ((raio * raio) * pi);

    printf("A=%.4lf\n", area);

    return 0;
}

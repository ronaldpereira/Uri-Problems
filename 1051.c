#include <stdio.h>

int main(){

    float salario, x1, y1, z1, impostoa, impostob;

    impostoa = 0.08 * 1000;
    impostob = 0.18 * 1500;

    scanf("%f", &salario);

    if(salario <= 2000.00)
        printf("Isento\n");

    else if(salario > 2000.00 && salario <= 3000.00){

        x1 = (salario - 2000.00) * 0.08;

        printf("R$ %.2f\n", x1);
    }

    else if(salario > 3000.00 && salario <= 4500.00){

        y1 = (salario - 3000.00) * 0.18;

        printf("R$ %.2f\n", y1 + impostoa);
    }

    else if(salario > 4500.00){

        z1 = (salario - 4500.00) * 0.28;

        printf("R$ %.2f\n", z1 + impostoa + impostob);

    }
return 0;
}

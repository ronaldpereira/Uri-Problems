#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int t, i;
    double n;

    scanf("%d",&t);

    for(i = 0; i < t; i++){
        scanf("%lf", &n);
        n = (n/2);
        printf("%.0lf\n", ceil(n));
    }

return 0;
}

#include <stdio.h>

int main(){

    int n, c, x, p, m = 0;

    scanf("%d", &n);

    for(c = 0; c < n; c++){

        scanf("%d", &x);

        for(p = 2; p < x; p++){
            if(x % p == 0)
                m++;
        }

        if(m > 0)
            printf("%d nao eh primo\n", x);

        else if(m == 0)
            printf("%d eh primo\n", x);

        m = 0;

    }

return 0;
}

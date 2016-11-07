#include <stdio.h>
#include <stdlib.h>

int main(){

    int x1, y1, x2, y2;
    int c , d;


    while(1){

        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

        if(x1 == 0 && y1 == 0 && x2 == 0 && y2 == 0)
            break;

    c = 0;
    d = 0;
    if(x1 == x2 && y1 != y2)
        printf("1\n");

    else if(x1 != x2 && y1 == y2)
        printf("1\n");

    else{

    if(x1 < x2){
        while(x1 != x2){
            x1++;
            c++;
        }
            if(y1 >= y2){
                while(y1 != y2){
                    y1--;
                    d++;
                }
            }
            else if(y1 < y2){
                while(y1 != y2){
                    y1++;
                    d++;
                }
            }
    }

    else if(x1 >= x2){
        while(x1 != x2){
            x1--;
            c++;
        }
            if(y1 >= y2){
                while(y1 != y2){
                    y1--;
                    d++;
                }
            }
            else if(y1 < y2){
                while(y1 != y2){
                    y1++;
                    d++;
                }
            }
    }



    if(c == 0 && d == 0)
        printf("0\n");

    else if(c < d || c > d)
        printf("2\n");

    else if(c == d)
        printf("1\n");

    }
    }

return 0;
}

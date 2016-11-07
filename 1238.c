#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void combinador(char str[], char str1[], char str2[]){

    int i, t1, t2, t;

    t1 = strlen(str1);
    t2 = strlen(str2);
    t = t1 + t2;

    memset(str,0,100);

    if(t2 < t1){
        for(i = 0; i <= 2 * t2; i++){
            if(i % 2 == 0){
                str[i] = str1[i/2];
            }
            else if(i % 2 == 1){
                str[i] = str2[(i-1)/2];
            }
        }

        for(; i < t; i++)
            str[i] = str1[i-t2];
    }

    else if(t1 < t2){
        for(i = 0; i <= (2 * t1) - 1; i++){
            if(i % 2 == 0){
                str[i] = str1[i/2];
            }
            else if(i % 2 == 1){
                str[i] = str2[(i-1)/2];
            }
        }

        for(; i < t; i++)
            str[i] = str2[i-t1];
    }

    else if(t1 == t2){
        for(i = 0;i <= (2 * t1) - 1; i++){
            if(i % 2 == 0){
                str[i] = str1[i/2];
            }
            else if(i % 2 == 1){
                str[i] = str2[(i-1)/2];
            }
        }
    }
}

int main()
{
    int n , i;
	char s1[50], s2[50], s[101];

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%s", s1);
        scanf("%s", s2);

        combinador(s,s1,s2);
        printf("%s\n", s);
    }

return 0;
}

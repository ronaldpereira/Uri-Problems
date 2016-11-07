#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char s[20];

    scanf("%s", s);


    if(strlen(s) == 10){
        scanf("%s", s);
        if(strlen(s) == 3){
            scanf("%s", s);
                if(strlen(s) == 9)
                    printf("aguia\n");

                else
                    printf("pomba\n");
        }

        else{
            scanf("%s", s);
                if(strlen(s) == 7)
                    printf("homem\n");

                else
                    printf("vaca\n");
        }
        }


    else{
        scanf("%s", s);
        if(strlen(s) == 6){
            scanf("%s", s);
                if(strlen(s) == 10)
                    printf("pulga\n");

                else
                    printf("lagarta\n");
        }

        else{
            scanf("%s", s);
                if(strlen(s) == 10)
                    printf("sanguessuga\n");

                else
                    printf("minhoca\n");
        }
        }

return 0;
}

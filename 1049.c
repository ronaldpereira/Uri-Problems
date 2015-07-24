/*
* Author : Ronald Pereira
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 2 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
*/

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

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
  
int maior_numero_com_digitos_de(int x){
  
    int m = 0, c = 0, d = 0, u = 0, num = 0, maior = 0;
    int first = 0, second = 0, third = 0, fourth = 0;
      
    if(x > 999){
        num = x;
        m = num / 1000;
        num -= (m * 1000);
        c = num / 100;
        num -= (c * 100);
        d = num / 10;
        num -= (d * 10);
        u = num;
    }
  
    else if(x > 99 && x <= 999){
        num = x;
        c = num / 100;
        num -= (c * 100);
        d = num / 10;
        num -= (d * 10);
        u = num;
    }
  
    else if(x > 9 && x <= 99){
        num = x;
        d = num / 10;
        num -= (d * 10);
        u = num;
    }
  
    else if(x >= 0 && x <= 9){
        u = num;
    }   
      
      
      
    if(m >= c && m >= d && m >= u){
    first = m;
        if(c >= d && c >= u){
        second = c;
            if(d >= u){
                third = d;
                fourth = u;
            }
            else if(u >= d){
                third = u;
                fourth = d;
            }
        }
        else if(d >= c && d >= u){
        second = d;
            if(c >= u){
                third = c;
                fourth = u;
            }
            else if(u >= c){
                third = u;
                fourth = c;
            }
        }
        else if(u >= c && u >= d){
        second = u;
            if(c >= d){
                third = c;
                fourth = d;
            }
            else if(d >= c){
                third = d;
                fourth = c;
            }
        }
    }
     
    else if(c >= m && c >= d && c >= u){
    first = c;
        if(m >= d && m >= u){
        second = m;
            if(d >= u){
                third = d;
                fourth = u;
            }
            else if(u >= d){
                third = u;
                fourth = d;
            }
        }
        else if(d >= m && d >= u){
        second = d;
            if(m >= u){
                third = m;
                fourth = u;
            }
            else if(u >= m){
                third = u;
                fourth = m;
            }
        }
        else if(u >= d && u >= m){
        second = u;
            if(d >= m){
                third = d;
                fourth = m;
            }
            else if(m >= d){
                third = m;
                fourth = d;
            }
        }
    }
 
    else if(d >= u && d >= c && d >= m){
    first = d;
        if(c >= u && c >= m){
        second = c;
            if(m >= u){
                third = m;
                fourth = u;
            }
            else if(u >= m){
                third = u;
                fourth = m;
            }
        }
        else if(m >= c && m >= u){
        second = m;
            if(c >= u){
                third = c;
                fourth = u;
            }
            else if(u >= c){
                third = u;
                fourth = c;
            }
        }
        else if(u >= m && u >= m){
        second = u;
            if(c >= m){
                third = c;
                fourth = m;
            }
            else if(m >= c){
                third = m;
                fourth = c;
            }
        }
    }
     
    else if(u >= m && u >= c && u >= d){
    first = u;
        if(m >= d && m >= c){
        second = m;
            if(d >= c){
                third = d;
                fourth = c;
            }
            else if(c >= d){
                third = c;
                fourth = d;
            }
        }
        else if(d >= m && d >= c){
        second = d;
            if(m >= c){
                third = m;
                fourth = c;
            }
            else if(c >= m){
                third = c;
                fourth = m;
            }
        }
        else if(c >= d && c >= m){
        second = c;
            if(d >= m){
                third = d;
                fourth = m;
            }
            else if(m >= d){
                third = m;
                fourth = d;
            }
        }
    }
     
        maior = ((1000 * first) + (100 * second) + (10 * third) + fourth);
     
return maior;
}
 
int menor_numero_com_digitos_de(int x){
  
    int m = 0, c = 0, d = 0, u = 0, num = 0, menor = 0;
    int first = 0, second = 0, third = 0, fourth = 0;
      
    if(x > 999){
        num = x;
        m = num / 1000;
        num -= (m * 1000);
        c = num / 100;
        num -= (c * 100);
        d = num / 10;
        num -= (d * 10);
        u = num;
    }
  
    else if(x > 99 && x <= 999){
        num = x;
        c = num / 100;
        num -= (c * 100);
        d = num / 10;
        num -= (d * 10);
        u = num;
    }
  
    else if(x > 9 && x <= 99){
        num = x;
        d = num / 10;
        num -= (d * 10);
        u = num;
    }
  
    else if(x >= 0 && x <= 9){
        u = num;
    }   
      
      
      
    if(m >= c && m >= d && m >= u){
    first = m;
        if(c >= d && c >= u){
        second = c;
            if(d >= u){
                third = d;
                fourth = u;
            }
            else if(u >= d){
                third = u;
                fourth = d;
            }
        }
        else if(d >= c && d >= u){
        second = d;
            if(c >= u){
                third = c;
                fourth = u;
            }
            else if(u >= c){
                third = u;
                fourth = c;
            }
        }
        else if(u >= c && u >= d){
        second = u;
            if(c >= d){
                third = c;
                fourth = d;
            }
            else if(d >= c){
                third = d;
                fourth = c;
            }
        }
    }
     
    else if(c >= m && c >= d && c >= u){
    first = c;
        if(m >= d && m >= u){
        second = m;
            if(d >= u){
                third = d;
                fourth = u;
            }
            else if(u >= d){
                third = u;
                fourth = d;
            }
        }
        else if(d >= m && d >= u){
        second = d;
            if(m >= u){
                third = m;
                fourth = u;
            }
            else if(u >= m){
                third = u;
                fourth = m;
            }
        }
        else if(u >= d && u >= m){
        second = u;
            if(d >= m){
                third = d;
                fourth = m;
            }
            else if(m >= d){
                third = m;
                fourth = d;
            }
        }
    }
 
    else if(d >= u && d >= c && d >= m){
    first = d;
        if(c >= u && c >= m){
        second = c;
            if(m >= u){
                third = m;
                fourth = u;
            }
            else if(u >= m){
                third = u;
                fourth = m;
            }
        }
        else if(m >= c && m >= u){
        second = m;
            if(c >= u){
                third = c;
                fourth = u;
            }
            else if(u >= c){
                third = u;
                fourth = c;
            }
        }
        else if(u >= m && u >= m){
        second = u;
            if(c >= m){
                third = c;
                fourth = m;
            }
            else if(m >= c){
                third = m;
                fourth = c;
            }
        }
    }
     
    else if(u >= m && u >= c && u >= d){
    first = u;
        if(m >= d && m >= c){
        second = m;
            if(d >= c){
                third = d;
                fourth = c;
            }
            else if(c >= d){
                third = c;
                fourth = d;
            }
        }
        else if(d >= m && d >= c){
        second = d;
            if(m >= c){
                third = m;
                fourth = c;
            }
            else if(c >= m){
                third = c;
                fourth = m;
            }
        }
        else if(c >= d && c >= m){
        second = c;
            if(d >= m){
                third = d;
                fourth = m;
            }
            else if(m >= d){
                third = m;
                fourth = d;
            }
        }
    }
         
    menor = ((1000 * fourth) + (100 * third) + (10 * second) + first);
 
return menor;
}
 
int krapekar(int x) {
 
       int cnt = 0;
        
       if(x == 1)
        cnt = 5;
        
       else if(x == 2 || x == 4 || x == 7 || x == 9)
        cnt = 4;
         
       else if(x == 3 || x == 5 || x == 6 || x == 8)
        cnt = 6;
     
    else{
    while (x != 6174) {
        if(x == 0){
            cnt = -1;
            break;
        }
        int maior = maior_numero_com_digitos_de(x);
 
        int menor = menor_numero_com_digitos_de(x);
         
        x = maior - menor;
 
        cnt += 1;
    }
    }
 
return cnt;
 
}
 
int main() {
 
    int v, n, i;
 
    scanf("%d", &v);
     
    for(i = 0; i < v; i++){
     
        scanf("%d", &n);
     
        printf("Caso #%d: %d\n", (i + 1), krapekar(n));
    }
     
return 0;
 
}

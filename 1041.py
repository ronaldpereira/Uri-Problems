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

linha = raw_input()
valores = linha.split(" ")
 
x = float(valores[0])
y = float(valores[1])
 
if (x > 0 and y > 0):
    print("Q1")
elif (x < 0 and y > 0):
    print("Q2")
elif (x < 0 and y < 0):
    print("Q3")
elif (x > 0 and y < 0):
    print("Q4")
elif (x != 0 and y == 0):
    print("Eixo X")
elif (x == 0 and y != 0):
    print("Eixo Y")
else:
    print("Origem")

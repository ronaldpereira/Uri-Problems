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
entrada = linha.split(" ")
cod_1 = float(entrada[0])
num_1 = float(entrada[1])
preco_1 = float(entrada[2])
 
linha2 = raw_input()
entrada2 = linha2.split(" ")
cod_2 = float(entrada2[0])
num_2 = float(entrada2[1])
preco_2 = float(entrada2[2])
 
total =((num_1 * preco_1) + (num_2 * preco_2))
 
print("VALOR A PAGAR: R$ %.2f" %total)

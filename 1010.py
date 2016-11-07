linha = input()
entrada = linha.split(" ")
cod_1 = float(entrada[0])
num_1 = float(entrada[1])
preco_1 = float(entrada[2])

linha2 = input()
entrada2 = linha2.split(" ")
cod_2 = float(entrada2[0])
num_2 = float(entrada2[1])
preco_2 = float(entrada2[2])

total =((num_1 * preco_1) + (num_2 * preco_2))

print("VALOR A PAGAR: R$ %.2f" %total)

lista = list(map(int, input().split()))

if(lista[0] > lista[1]):
    if(lista[0] % lista[1] == 0):
        print("Sao Multiplos")
    else:
        print("Nao sao Multiplos")
else:
    if(lista[1] % lista[0] == 0):
        print("Sao Multiplos")
    else:
        print("Nao sao Multiplos")

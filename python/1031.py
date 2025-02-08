def cidade_13(N):
    objetivo = 13
    m = 1

    while True:
        regiões = list(range(1,N+1))
        indice = 0
        while len(regiões) > 1:
            regiões.pop(indice)
            indice = (indice + m -1) % len(regiões)

        if(regiões[0] == objetivo):
            return m

        m += 1

while True:
    N = int(input())
    if(N == 0):
        break
    print(cidade_13(N))
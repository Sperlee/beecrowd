N = list(map(int, input().split()))
if(N[0] >= N[1]):
    N[1] += 24
resultado = N[1] - N[0]
print(f"O JOGO DUROU {resultado} HORA(S)")
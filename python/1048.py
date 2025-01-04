N = float(input())
if(N >= 0):
    P = 15
    C = ((15*N)/100) + N
if(N >= 400.01):
    P = 12
    C = 12*N/100 + N
if(N >= 800.01):
    P = 10
    C = 10*N/100 + N
if(N >= 1200.01):
    P = 7
    C = 7*N/100 + N
if(N >= 2000.01):
    P = 4
    C = (4*N)/100 + N
print(f"Novo salario: {C:.2f}")
print(f"Reajuste ganho: {(C - N):.2f}")
print(f"Em percentual: {P} %")
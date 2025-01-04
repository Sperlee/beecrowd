N = int(input())

DDD = [61,71,11,21,32,19,27,31]
Destination = ["Brasilia","Salvador","Sao Paulo","Rio de Janeiro","Juiz de Fora","Campinas","Vitoria","Belo Horizonte"]
cadastrado = False

for i in range(len(DDD)):
    if(N == DDD[i]):
        print(Destination[i])
        cadastrado = True
        break
if(cadastrado == False):
    print("DDD nao cadastrado")
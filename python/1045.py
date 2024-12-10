import math

def quicksort(arr):
    if(len(arr) <= 1):
        return arr
    else:
        pivot = arr[len(arr) // 2]
        left = [x for x in arr if x > pivot]
        right = [x for x in arr if x < pivot]
        middle = [x for x in arr if x == pivot]
        return quicksort(left) + middle + quicksort(right)

lados = list(map(float, input().split()))
lados_decrescente = quicksort(lados)
K = False
if(lados_decrescente[0] >= lados_decrescente[1] + lados_decrescente[2]):
    print("NAO FORMA TRIANGULO")
else:
    if(pow(lados_decrescente[0],2) == pow(lados_decrescente[1],2) + pow(lados_decrescente[2],2)):
        print("TRIANGULO RETANGULO")
    if(pow(lados_decrescente[0],2) > pow(lados_decrescente[1],2) + pow(lados_decrescente[2],2)):
        print("TRIANGULO OBTUSANGULO")
    if(pow(lados_decrescente[0],2) < pow(lados_decrescente[1],2) + pow(lados_decrescente[2],2)):
        print("TRIANGULO ACUTANGULO")
    if(lados_decrescente[0] == lados_decrescente[1] == lados_decrescente[2]):
        print("TRIANGULO EQUILATERO")
        K = True
    for i in range(2):
        if(K):
            break
        for j in range(i+1,3,1):
            if(lados_decrescente[i] == lados_decrescente[j]):
                print("TRIANGULO ISOSCELES")
                K = True
                break
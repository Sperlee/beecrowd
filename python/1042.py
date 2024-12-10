def quicksort(arr):
    if(len(arr) <= 1):
        return arr
    else:
        pivot = arr[len(arr) // 2]
        left = [x for x in arr if x < pivot]
        right = [x for x in arr if x > pivot]
        middle = [x for x in arr if x == pivot]
        return quicksort(left) + middle + quicksort(right)

lista = list(map(int, input().split()))

lista_ordenada = quicksort(lista)

for i in range(len(lista)):
    print(lista_ordenada[i])
print("")
for i in range(len(lista)):
    print(lista[i])
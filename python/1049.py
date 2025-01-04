caracteristica1 = input().strip()
caracteristica2 = input().strip()
caracteristica3 = input().strip()

if caracteristica1 == "vertebrado":
    if caracteristica2 == "ave":
        if caracteristica3 == "carnivoro":
            print("aguia")
        elif caracteristica3 == "onivoro":
            print("pomba")
    elif caracteristica2 == "mamifero":
        if caracteristica3 == "onivoro":
            print("homem")
        elif caracteristica3 == "herbivoro":
            print("vaca")
elif caracteristica1 == "invertebrado":
    if caracteristica2 == "inseto":
        if caracteristica3 == "hematofago":
            print("pulga")
        elif caracteristica3 == "herbivoro":
            print("lagarta")
    elif caracteristica2 == "anelideo":
        if caracteristica3 == "hematofago":
            print("sanguessuga")
        elif caracteristica3 == "onivoro":
            print("minhoca")


#segunda opção

# Estrutura de dados para mapear as características ao animal correspondente
animais = {
    ("vertebrado", "ave", "carnivoro"): "aguia",
    ("vertebrado", "ave", "onivoro"): "pomba",
    ("vertebrado", "mamifero", "onivoro"): "homem",
    ("vertebrado", "mamifero", "herbivoro"): "vaca",
    ("invertebrado", "inseto", "hematofago"): "pulga",
    ("invertebrado", "inseto", "herbivoro"): "lagarta",
    ("invertebrado", "anelideo", "hematofago"): "sanguessuga",
    ("invertebrado", "anelideo", "onivoro"): "minhoca",
}

# Leitura das características
caracteristica1 = input().strip()
caracteristica2 = input().strip()
caracteristica3 = input().strip()

# Busca o animal no dicionário e exibe o resultado
print(animais[(caracteristica1, caracteristica2, caracteristica3)])

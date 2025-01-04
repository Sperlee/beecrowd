Hi, Mi, Hf, Mf = map(int, input().split())
inicio_total = Hi * 60 + Mi
fim_total = Hf * 60 + Mf

if fim_total <= inicio_total:
    fim_total += 24 * 60

minuto_total = fim_total - inicio_total
hora_total = minuto_total // 60
minuto_restante = minuto_total % 60

print(f"O JOGO DUROU {hora_total} HORA(S) E {minuto_restante} MINUTO(S)")

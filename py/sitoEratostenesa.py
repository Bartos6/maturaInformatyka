n = int(input("Ile el: "))
tab = [0] * (n + 1)

i = 0
while i <= n:
    tab[i] = i
    i += 1
tab[1] = 0 # 1 nie jest ani pierwsza, ani zlozona

i = 2
while i <= n:
    if tab[i] == 0:
        i += 1
        continue
    x = i * 2
    while x <= n:
        tab[x] = 0
        x += i
    i += 1

print(f"Liczby pierwsze w zakresie 2 - {n}:")
i = 0
while i<=n:
    if tab[i] != 0:
        print(tab[i], end = " ")
    i+=1


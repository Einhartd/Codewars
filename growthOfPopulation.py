def nb_year(p0, percent, aug, p):
    n = 0
    while (p0 < p):
        p0 = p0 + p0 * percent * 0.01 + aug
        n = n + 1
    return n

p0 = 1500
percent = 5
aug = 100
p = 5000

ans = nb_year(p0, percent, aug, p)
print(f"Odpowiedz: {ans}")
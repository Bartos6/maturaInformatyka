def binarySearch(tab, liczba):
    l = 0
    p = len(tab) - 1

    while l <= p:
        s = (l+p)//2
        if liczba == tab[s]:
            return s
        if liczba > tab[s]:
            l = s + 1
        else:
            p = s - 1
    return -1

tab = [1,2,4,7,8,9,11]
print(binarySearch(tab, 3))

### KOD NIEPEŁNY ###
file = open("dane.txt", "r")
dane = []
for i in range(100):
    line = file.readline().split()
    dane.append(line)

def naDzies(liczba, podst_sys):
    dzies = 0
    pot = 1
    for i in range(len(liczba)-1,-1,-1):
        if ord(liczba[i]) <= ord('9'):
            x = ord(liczba[i]) - ord('0')
        else:
            x = ord(liczba[i]) - ord('A') + 10
        dzies += pot*x
        pot *= podst_sys

    return dzies

def zad1():
    ileSys = [0]*17
    for line in dane:
        podstawa_systemu = 2
        while True:
            suma = 0
            for i in range(2):
                suma += naDzies(line[i], podstawa_systemu)

            if suma == naDzies(line[2], podstawa_systemu):
                break;
            podstawa_systemu += 1
        ileSys[podstawa_systemu]+=1

    sum = 0
    print("sys\tile")
    for i in range(0,17):
        print(i,ileSys[i], sep = "\t")

zad1()

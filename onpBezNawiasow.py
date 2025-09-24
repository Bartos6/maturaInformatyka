wyr = input().split()
stos = ['#']

for i in wyr:
    if i >= '0' and i <='9':
        print(i, end = " ")

    elif i == '+' or i == '-':
        while stos[-1] != '#':
            print(stos[-1], end = " ")
            stos.pop()
        stos.append(i)
    elif i == '*' or i == '/':
        while stos[-1] != '#' and stos[-1] != '+' and stos[-1] != '-' :
            print(stos[-1], end = " ")
            stos.pop()
        stos.append(i)

    elif i == '^':
        if stos[-1] == '^':
            print(stos[-1], end = " ")
            stos.pop()
        stos.append(i)

while stos[-1] != '#':
    print(stos[-1], end = " ")
    stos.pop()

tab = [1,2,3,4,5,6,7]

for i in range(len(tab)):
    licznikBrakuZmian=0
    for j in range(len(tab)-i-1):
        if tab[j] > tab[j+1]:
            tab[j], tab[j+1] = tab[j+1], tab[j] 
        else:
            licznikBrakuZmian+=1
            
        # print( tab[j], tab[j+1])
    if licznikBrakuZmian == len(tab)-1:
        break

print(tab)

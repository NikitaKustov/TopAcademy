#1 задание
print("1 zadan")
from random import randint
def rnd(arr):
    for i in range(0, 10):
        arr.append(randint(1, 50))
    return arr

arr = []
mas = rnd(arr)
print(mas)

z = randint(1, 18)
j=len(mas)-1
print("z", z)
i=0
while i<j:
    if  z -j > i:
        i+=1
    elif z -j < i:
        j=-1
    else:
        print(" I ", i, " J ", j)
        break
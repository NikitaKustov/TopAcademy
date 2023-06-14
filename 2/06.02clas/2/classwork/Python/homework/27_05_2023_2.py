#1 задание
print("1 zadan")
n = int(input()) 
mas = []
while n>0: 
    b = input()
    bn = int(input()) 
    while bn>0:
        mas.append(b) 
        bn = bn-1
    n=n-1
print(mas)
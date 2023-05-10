def 

mas=[0,1,0,3,12]
for i in range(len(mas)):
    if mas[i] == '0':
        t = mas[i]
        mas[i] = mas[i+1]
        mas[i+1] = t
print(mas)
a5 = 0
a10 = 0
a20 = 0
kazna = 0
print("Введите кол-во денег")
kol = int(input())
for i in range(0,kol):
    print("Деньга")
    babki=int(input())
    if(babki == 5):
        a5+=1
    if(babki==10):
        if a5>=1:
            a5-=1
            a10+=1
        else:
            print("нехватает сдачи, не помрёшь ушь без нее")
    if(babki==20):
        if(a10>=1 and a5>=1):
            a20+=1
            a10-=1
            a5-=1
        elif(a5>=3):
            a20+=1
            a5-=3
        else:
            print("нехватает сдачи, не помрёшь ушь без нее")
print(a5,a10,a20)
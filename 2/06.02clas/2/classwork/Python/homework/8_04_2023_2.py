# вводится число и границы диаппазона 
a = int(input("Start"))
b = int(input("End"))
c = int(input("Number")) 
if a>=b:
    print("Error")
else: 
    while True: 
        c = int(input("Number")) 
        if c>b or c<a:
            print("Error")
        else:
            False
for i in range(a, b):
    if (i!=c):
        print(i, " ") 
    else:
        print("!", i, "! ") 

#выдаёт ошибку почему то
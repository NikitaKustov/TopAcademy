print("Здравствуйте, я конвертер валют \n Выбирайте валюту для конвертации ")
flag = True
while (flag):
    a = int(input("1.RUB \n 2.DOL \n 3.EUR \n 4.Exit ")) 
    if a==4:
        break
    print("Выберите желаемую валюту ")
    b = int(input("1.RUB \n 2.DOL \n 3.EUR \n 4.Exit "))  
    if b==4:
        break
    c = int(input("Введите сумму "))
    if a == 1:
        if b == 1:
            print("какой в этом смысл? ")
        elif b == 2:
            print(c * 80.6)
        elif b == 3:
            print(c* 85.9)
        else:
            print("Это не валюта это выход")
    elif a==2:
        if b == 1:
            print(c / 80.6)
        elif b == 2:
            print("какой в этом смысл? ")
        elif b == 3:
            print(c * 1.07)
        else:
            print("Это не валюта это выход")
    elif a==3:
        if b == 1:
            print(c / 85,9)
        elif b == 2:
            print(c / 1.07)
        elif b == 3:
            print("какой в этом смысл? ")
        else:
            print("Это не валюта это выход")
    else:
        break

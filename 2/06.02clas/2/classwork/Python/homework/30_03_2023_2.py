from random import randint
#1 задание
print("1 zadan")
b = input("Введите операцию с числами: ")
a = b.split()  
if len(a) != 3: 
    print("ошибка")
else:
    num1 = int(a[0])
    c = a[1]
    num2 = int(a[2])

    if c == "+":
        print(num1 + num2)
    elif c == "-":
        print(num1 - num2)
    elif c == "*":
        print(num1 * num2)
    elif c == "/":
        print(num1 / num2)
    else:
        print("Ошибка, используйте только эти символы (+, -, *, /).")
# Задание 2:
# В списке целых, заполненном случайными числами,
# определить минимальный и максимальный элементы,
# посчитать количество отрицательных элементов, посчитать количество положительных элементов, посчитать
# количество нулей. Результаты вывести на экран. 
#2 задание
print("2 zadan")
rd = [] 
for i in range(20): 
    rd.append(randint(0, 20))

print(rd)
count_pos = 0
count_pos = sum(True for i in rd if i > 0)
count_neg = 0
count_neg = sum(True for i in rd if i < 0)
count_zero= 0
count_zero = sum(True for i in rd if i == 0) 

maxx = max(rd)
minn = min(rd)

print(
    "pos:",count_pos, 
    "neg:",count_neg, 
    "zero:",count_zero, 
    "max", maxx,
    "min", minn
)
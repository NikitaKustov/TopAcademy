#1 задание
print("1 zadan")
slovo = str(input())
a = len(slovo)
i = 0
a = a - 1
k = 0
while a - i >= i:
    if slovo[a - i] == slovo[i]:
        i += 1
    else:
        k = 1
        break
if k == 1:
    print("no")
else:
    print("yes")

#2 задание
print("2 zadan")
text = input()
words = input().split()
for i in words:
    text = text.replace(i, i.upper())
    print(text)

#3 задание
print("3 zadan")
text1 = input()
print(len([i for i in text1.split('. ')]))
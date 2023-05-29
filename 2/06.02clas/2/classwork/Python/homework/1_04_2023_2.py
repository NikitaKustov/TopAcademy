test = 'Ослепший старый маг Ночью по лесу бродил. На кладбище разлил Он волшебный эликсир, И лишь проговорил: «Что ж я, старый, натворил!'
#1 задание
print("1 zadan")
st = input("строка: ") 
print(reversed(st))
#2 задание
print("2 zadan")
alpha=0
for i in st:
    if (i.isdigit()):
        alpha+=1
print("кол-во цифр ", alpha) 
print("кол-во букв ", len(st)-alpha)
#3 задание
print("3 zadan")
znaki = input("Знак")
k=0
for x in test:
    if x ==znaki:
        k += 1
print("Символы ", k)
#4 задание
print("4 zadan")
slovo = input("Слово ") 
k=0
st_1 = st.split
for i in st_1:
    if i==slovo:
        k+=1
print("Количество слов", k)
#5 задание
print("5 zadan ")
slovo = input("слово ") 
slovo1 = input("замена слова ") 
# for i in st_1:
#     if i==slovo:
#         i=slovo1 
# print(st)
#or 
print(st.replace(slovo, slovo1))
from random import randint
#1 задание
print("1 zadan")
st = input("Арифметическое выражение ") 
stt = st.split() 
if len(stt)>3:
    print("Ошибка ") 

a = int(stt[0])
b = int(stt[2]) 
if stt[1]=='+':
    print( " = ",a+b) 
elif stt[1]=='-':
    print( " = ",a-b) 
elif stt[1]=='/':
    print( " = ",a/b) 
elif stt[1]=='*':
    print( " = ",a*b) 

#2 задание
print("2 zadan")
arr = [] 
for i in arr:
    arr.append(randint(0,50))
k=0
k1=1
k2=2
print("max ", max(arr)) 
print("min ", min(arr)) 
for i in arr:
    if i <0:
        k+=1 
    elif i>0:
        k1+=1 
    else: 
        k2+=1
print("отриц ", k, " полож ", k1, " нули ", k2)
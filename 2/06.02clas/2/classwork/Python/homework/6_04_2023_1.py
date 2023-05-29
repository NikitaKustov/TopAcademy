import random 

items = [random.randint(-50, 100) for i in range(10)] 
s1=0
s2=0 
s3=0
for i in items:
    if i%2==0:
        s1+=1
    else:
        s2+=1
    if i<0:
        s3+=1
print(" \n  ",s1, "\n  ", s2, "\n ", s3 )
p1=1
for i in range(3,len(items), 3):
    p1*=items[i] 
print("Произведение чисел с индексом 3", p1)
min_pos=items.index(min(items)) 
max_pos=items.index(max(items))  
p2=1
if min_pos<max_pos:
    for i in range(min_pos, max_pos):
        p2*=items[i]
else: 
    if min_pos<max_pos:
        for i in range(max_pos, min_pos):
            p2*=items[i] 
print("Произаедение чисел между макс и мин ", p2)
fp=0
lp=0 
s3=0
for i in items:
    if i>0:
        fp=items.index(i)
for i in reversed(items):
    if i>0:
        lp=items.index(i)
if fp==lp or fp+1==lp or lp-1==fp:
    print("ошибка")
else:
    for i in range(fp, lp):
        s3==i
print("Сумма между положительными ", s3)
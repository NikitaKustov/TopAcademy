from random import randint
a = int(input())  
Matrix = [[0 for x in range(a)] for y in range(a)]  
Matrix = [[randint(1, 10) for j in range(a)] for i in range(a)] 
for i in range(a):
    for j in range(a): 
       if Matrix[i][j]:

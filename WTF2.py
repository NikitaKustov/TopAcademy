s=0
a = [1,2,1,4,3,2,1,4]
s = a[0] * a[1]
for i in a:
    if(a[i] * a[i+1] > s):
        s=a[i] * a[i+1]
        print(a[i])
        


        
print(s)
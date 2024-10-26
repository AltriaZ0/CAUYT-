import random

n=eval(input())
cnt=0
for i in range(1000000):
    x=0
    A=[0,0,0,0,1,1]
    B=[0,0,0,1,1,1,1]
    for j in range(n):
        a=random.choice(A)
        b=random.choice(B)
        x+=b
        x-=a
        A.remove(a)
        B.remove(b)
    if(x==0):
        cnt+=1;
print("{:.2f}".format(cnt/1000000))

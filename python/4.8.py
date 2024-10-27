import random

x1=eval(input())
x2=eval(input())
y1=eval(input())
y2=eval(input())
n=eval(input())
m=eval(input())
cnt=0
A=[1]*x1+[0]*y1
B=[1]*x2+[0]*y2

for i in range(10000):
    x=0
    tA=list(A)
    tB=list(B)
    for j in range(n):
        a=random.choice(tA)
        b=random.choice(tB)
        x+=b
        x-=a
        tA.remove(a)
        tB.remove(b)
    if(x==m-x1):
        cnt+=1;
print("{:.2f}".format(cnt/10000))

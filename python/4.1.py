import random
x=eval(input())
cnt=0
for i in range(100000):
    n=0
    for j in range(5):
        n+=random.randint(1,21)
    if(n==x):
        cnt+=1
print("{:.2f}".format(cnt/100000))

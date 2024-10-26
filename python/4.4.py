import random
x=eval(input())
sum=0
for i in range(100000):
    cnt=0
    while(cnt<=50):
        cnt+=random.randint(1,x)
    sum+=cnt
print("{:.1f}".format(sum/100000))


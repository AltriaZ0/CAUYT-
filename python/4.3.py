import random
x=eval(input())
cb=0
cg=0
for i in range(1000000):
    s=random.randint(0,1)
    if(s==1):
        cg+=1
        sec=random.randint(0,1)
        if(sec==1):
            cg+=(1-x*0.01)
            cb+=x*0.01
        else:
            cb+=1
    else:
        cb+=1
print("{:.2f}".format(cb/cg))
    



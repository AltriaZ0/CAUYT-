import random

k=0
random.seed(125)
t=random.randint(0,100)
n=int(input("Please input:"))
while True:
    k+=1
    try:
        if(n==t):
            print("{} times, you got it!".format(k))
            break
        else:
            if(n>t):
                print("Too big!")
            if(n<t):
                print("Too small!")
            n=int(input("Please input:"))
    except:
        print("Please input integer!")
        n=int(input("Please input:"))


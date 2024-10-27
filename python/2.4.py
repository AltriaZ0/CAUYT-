n=eval(input())
if n==1 or n==2:
    print(1)
else:
    fib=0
    x1=1
    x2=1

    for i in range(n-2):
        fib=x1+x2
        x2=x1
        x1=fib
    print(fib)
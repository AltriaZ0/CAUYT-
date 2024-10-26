f=input()
p=eval(input())

if(f=="P"):
    if(p<100):
        print("{:.2f}".format(p))
    if(p>=100):
        print("{:.2f}".format(p*0.9))
if(f=="H"):
    if(p<1000):
        print("{:.2f}".format(p*0.8))
    if(p>=1000):
        print("{:.2f}".format(p*0.7))
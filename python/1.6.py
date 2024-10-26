x=eval(input())
y=eval(input())
t=x/(y*y)
if(t<18):
    print("lower weight")
elif(18<=t<25):
    print("normal weight")
elif(25<=t<27):
    print("higher weight")
else:
    print("obesity")
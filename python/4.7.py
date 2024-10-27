x=input()
sum=0
wd=[7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2]
lst=[1,0,'X',9,8,7,6,5,4,3,2]
for i in range(len(x)-1):
    sum+=eval(x[i])*wd[i]
sum=sum%11

if(str(x[-1])==str(lst[sum])):
    print("YES")
else:
    print("NO")

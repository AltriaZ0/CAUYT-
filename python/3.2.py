n=eval(input())
ans=1
flag=1
for i in range(2,n+1):
    ans+=flag*(1/i)
    flag=-flag
print(f"{ans:.3f}")
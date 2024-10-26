x=eval(input())
y=365
if((x%4==0 and x%100!=0) or x%400==0):
    y+=1
print(y)
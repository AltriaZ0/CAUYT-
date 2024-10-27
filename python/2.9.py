s=list(input())
ss=[]
for i in s:
    if(i.isdigit() and int(i) not in ss):
        ss.append( int(i) )
print(ss)
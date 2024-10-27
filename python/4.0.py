x={ int(element)  for element in input().split(',')}
y={ int(element)  for element in input().split(',')}
n=list(x^y)
n.sort()
print( n )

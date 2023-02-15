from itertools import permutations
a=str(input())
a=list(a)
b=[]
for i in set(list(permutations(a))):
  if (len(i)==len(a)):
    b.append(i)
print(len(b))
b=list(sorted(b))
for i in b:
  i=''.join(i)
  print(i,end='\n')

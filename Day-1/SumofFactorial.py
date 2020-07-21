def fact(n):
    if n==0:
        return 1
    else:
        return n*fact(n-1)
n=input()
req=n
s=0
for i in n:
    s+=fact(int(i))
if s==int(req):
    print('yes')
else:
    print('No')
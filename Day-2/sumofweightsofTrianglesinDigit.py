n=int(input())
l=[1,0,0,0,1,0,1,0,2,1]
c=0
while n>0:
    x=n%10
    c+=l[x]
    n=n//10
print(c)
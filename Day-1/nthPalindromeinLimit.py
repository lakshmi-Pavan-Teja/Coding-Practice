#First Method

"""x,y=map(int,input().split())
l=[]
n=int(input())
for i in range(x,y):
    if len(l)!=n and str(i)==str(i)[::-1]:
        l.append(i)
print(l[-1])"""

# Second Method

"""x,y=input().split()
num=int(input())
count=[]
for i in range(int(x),int(y)):
    if str(i) == str(i)[::-1]:
        count.append(i)
print(count[num-1])"""

#Third Method

x,y=list(map(int,input().split()))
n=int(input())
count=0
vals=[]
for i in range(x,y+1):
    z=str(i)
    if z==z[::-1] and len(vals)!=n:
        vals.append(i)
    else:
        break
print(vals[-1])
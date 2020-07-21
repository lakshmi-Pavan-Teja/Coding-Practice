x = int(input())
s = 0
while x!=0:
    r = x%10
    if r%2==0:
        s=s+r
    x=x//10
print(s,end='')
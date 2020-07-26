# Problem-1
t = int(input())
for i in range(t):
    a,b = list(map(int,input().split()))
    count = 0
    while a!=0 or b!=0:
        if a>b:
            a -=b
        elif a<b:
            b -=a
        else:
            a = 0
            b = 0
        count += 1
    print(count)

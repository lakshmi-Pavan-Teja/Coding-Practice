n=int(input())
for _ in range(n):
    a,b = list(map(int,input().split()))
    if(a+2==b or a==b+2 or (a>b and a%2==0 and b+1==a) or (a<b and b%2==0 and a+1==b)):
        print("yes")
    else:
        print("No")
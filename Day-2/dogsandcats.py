t=int(input())
for i in range(t):
    c,d,l=list(map(int,input().split()))
    min1=(c-2*d)*4+d*4
    max1=c*4+d*4
    if l%4==0:
        if l<=max1 and l>=min1:
            print("Yes")
        else:
            print("no")
    else:
        print('No')

x,y=input().split()
l=[i for i in range(int(x),int(y)) if str(i)==str(i)[::-1]]
print(len(l))
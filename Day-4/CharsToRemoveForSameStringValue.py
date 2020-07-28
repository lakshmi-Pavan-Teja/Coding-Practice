t = int(input())
y = []
diff = []
for i in range(t):
    z = input()
    z = set(z)
    y.append(z)
for i in range(len(y)-1):
    diff.append(y[i]-y[i+1])
diff.append(y[-1]-y[-2])
for i in diff:
    print(*i,end='')
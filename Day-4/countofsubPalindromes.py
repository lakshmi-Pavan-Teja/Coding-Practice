x = input()
count = set()
for i in range(len(x)):
    for j in range(i):
        y = x[j:i+1]
        if len(y)>1:
            if y == y[::-1]:
                count.add(y)
print(len(count))
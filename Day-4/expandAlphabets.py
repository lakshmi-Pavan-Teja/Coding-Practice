x = input()
y = 0
val = ''
char = ''
while y!=len(x):
    if x[y].isdigit():
        val += x[y]
    else:
        print(int(val)*x[y],end='')
        val = ''
    y +=1
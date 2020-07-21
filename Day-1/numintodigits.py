x = int(input())
vals = ['Zero','One','Two','Three','Four','Five','Six','Seven','Eight','Nine']
output = ''
while x != 0:
    n = x % 10;
    output += vals[n]
    x = x//10
print(output,end='')
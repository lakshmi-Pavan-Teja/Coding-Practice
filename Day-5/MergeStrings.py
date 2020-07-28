s1 = input()
s2 = input()
i=1
while s1[-i]==s2[i]:
    i+=1
n = len(s1)-i
s3 = s1[:]+s2[i:]
# print(s3)  // to know String3
print(len(s3))
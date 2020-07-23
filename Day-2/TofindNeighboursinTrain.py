d = {1:'LB',2:'MB',3:'UB',4:'LB',5:'MB',6:'UB',7:'SU',0:'SL'}
val = {1:3,2:3,3:3,4:-3,5:-3,6:-3,7:1,0:-1}
t = int(input())
for i in range(t):
    x = int(input())
    seat = x % 8
    print(str(x)+ " "+str(val[seat])+d[seat])

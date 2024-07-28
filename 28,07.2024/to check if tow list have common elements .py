a=int(input())
b=int(input())
lst=[]
lst2=[]
for i in range(a):
    x=int(input())
    lst.append(x)
for i in range(b):
    x=int(input())
    lst2.append(x)
flg='y'
for i in lst:
    if i in lst2:
        flg='y'
        break
    else:
        pass
if flg=='y':
    print("It has in common")
else:
    print("It does not have anything in common")
    

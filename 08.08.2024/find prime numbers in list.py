def prime_check(n):
    c=0
    for i in range(1,n+1):
        if n%i==0:
            c+=1
    if c==2:
        return True
    else:
        return False
lst=[]
a=int(input("Enter the number of elements in lst"))
for i in range(a):
    x=int(input("Enter the value of element: "))
    lst.append(x)
for i in lst:
    if prime_check(i):
        print(i)

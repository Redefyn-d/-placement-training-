def fibonaci(n,lst):
    a=0
    b=1
    lst.append([0,1])
    for i in range(n):
        c=a+b
        lst.append(c)
        a=b
        b=c
lst=[]
a=int(input("Enter the number of numbers you want to check"))
fibonaci(a,lst)
for i in range(1,a+1):
    if i in lst:
        print(f"{i} is fibonaci number")
    else:
        print(f"{i} is not fibonaci number")

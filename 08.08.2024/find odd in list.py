def odd_check(lst):
    for i in lst:
        if i%2!=0:
            print(i)
        else:
            continue
lst=[]
a=int(input("Enter the number of elements in lst"))
for i in range(a):
    x=int(input("Enter the value of element: "))
    lst.append(x)
odd_check(lst)

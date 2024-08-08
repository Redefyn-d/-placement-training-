n=int(input("Enter the number of elements in the array"))
lst=[]
for i in range(n):
    x=int(input("Enter the value of the element in array"))
    lst.append(x)
h=int(input("Enter the point from which you want to split"))
lst=lst[h:]+lst[:h]
print(lst)

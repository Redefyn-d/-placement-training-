a=int(input("Enter the number of elements"))
lst=[]
for i in range(a):
    x=int(input("Enter the element"))
    lst.append(x)
print(f"Max differnece is {max(lst)-min(lst)}")

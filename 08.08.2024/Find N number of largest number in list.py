n=int(input("Enter the number of elements in the array"))
lst=[]
for i in range(n):
    x=int(input("Enter the value of the element in array"))
    lst.append(x)
c=int(input("Enter the number of the largest element you want to find"))
result=[]
for i in range(n):
    if len(result)==c:
        break
    max=0
    for j in lst:
        if j>max:
            max=j
    lst.remove(max)
    result.append(max)
print(result) 
    

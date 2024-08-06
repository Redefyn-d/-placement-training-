a=int(input("Enter the number of elements"))
lst=[]
for i in range(a):
    x=int(input("Enter the element"))
    lst.append(x)
diff=0
for i in range(a):
    for j in range(a):
        print(lst[i],lst[j],lst[i]-lst[j])
        if lst[j]!=min(lst):
            if lst[i]-lst[j]>diff:
                diff=lst[i]-lst[j]
print(f"Second largest differnece in the array is {diff}")
        

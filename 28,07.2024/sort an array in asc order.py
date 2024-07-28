a=int(input())
lst=[]
for i in range(a):
    x=int(input())
    lst.append(x)
for i in range(a):
    for j in range(i+1,a):
        if lst[i]>lst[j]:
            temp=lst[i]
            lst[i]=lst[j]
            lst[j]=temp
print(lst)

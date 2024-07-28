s1=int(input("Enter the num: "))
lst=[]
for i in range(s1):
    x=int(input())
    lst.append(x)
ans_lst=[]
for i in lst:
    ans_lst.append((i,i**2))
print(ans_lst)

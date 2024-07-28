a=int(input())
lst=[]
for i in range(a):
    x=int(input())
    lst.append(x)
n1=int(input('Enter the first num'))
n2=int(input("Enter the second num"))
pn1=lst.index(n1)
pn2=lst.index(n2)
temp=lst[pn1]
lst[pn1]=lst[pn2]
lst[pn2]=temp

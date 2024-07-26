n=int(input("Enter the number of values"))
a=0
b=1
print(a,b,sep=" ")
for i in range(2,n+1):
    c=a+b
    print (c,end=" ")
    a=b
    b=c

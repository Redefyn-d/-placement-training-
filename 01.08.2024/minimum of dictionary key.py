dict={}
lst=[]
for i in range(4):
    name=input('Enter the name of the person')
    age=int(input('Enter the age of the person'))
    lst.append([name,age])
for i in lst:
    dict[i[0]]=i[1]
print(min(dict))

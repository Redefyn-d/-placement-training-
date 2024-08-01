dict={}
lst=[]
for i in range(4):
    name=input('Enter the name of the person')
    marks=int(input('Enter the marks of the person'))
    lst.append([name,marks])
for i in lst:
    dict[i[0]]=i[1]
print(len(dict))
print(sum(dict.values())/len(dict))

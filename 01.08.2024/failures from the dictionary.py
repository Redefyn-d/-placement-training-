dict={}
lst=[]
for i in range(4):
    name=input('Enter the name of the person')
    marks=int(input('Enter the marks of the person'))
    lst.append([name,marks])
for i in lst:
    if i[1]<10:
        print(f"Student:{i} Failes his exams")

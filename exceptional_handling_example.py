with open('F:\Harshil Projects\Python\harshil.txt','r') as rf:
    with open('F:\Harshil Projects\Python\harshil2.txt','w') as wf:
        for i in rf.readlines():
            x,y=i.split(',')
            wf.write(f'{x}\'s Salary is {y}')

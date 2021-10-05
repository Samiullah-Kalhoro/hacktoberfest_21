list1 =[2,3,4,5,6,7,8,9]
list2 =[i for i in list1]
list =[]
for i in range(len(list2)):
    list.append(list1[i]+list2[i])
# print(list)

list3=[list1[i]+list2[i] for i in range(len(list1))]
print(list3)

# This function finds index of smallest number in list
def indexOfSmallestElement(lst):
    smallest_number = min(lst)
    index = lst.index(smallest_number)
    return(index)


lst = input("Enter numbers seprated by comma: ")
lst = lst.split(",")
lst = [int(i) for i in lst]
print(indexOfSmallestElement(lst))

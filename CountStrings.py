#program to count string that have same second and second last element
lst=["abhtjtdbc","ammara","hzhrkmzk","Naveed","abhtjtdbc","Muneeba"]
print("\n")
print(lst)
count=0
for string in lst:
    if string[1]==string[-2]:
        count+=1
print("\nThe count of string that have the same second and second last characters is: "+str(count))
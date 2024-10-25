main_string = input("Enter the main string: ")
substring = input("Enter the substring to search for: ")
#method 1. it looks for substring in main string
#if substring is not found it returns -1
position = main_string.find(substring)
if position != -1:
    print(f"The substring '{substring}' is found at position {position}.")
else:
    print(f"The substring '{substring}' is not found in the main string.")

#method 2 simialar to method 1 it checks if index matches or not and gives output
try:
    position = main_string.index(substring)
    print(f"The substring '{substring}' is found at position {position}.")
except ValueError:
    print(f"The substring '{substring}' is not found in the main string.")

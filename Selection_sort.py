def selection_sort(number):
    # This value of i corresponds to how many values were sorted
    for i in range(len(number)):
        # We assume that the first item of the unsorted segment is the smallest
        lowest_value_index = i
        # This loop iterates over the unsorted items
        for j in range(i + 1, len(number)):
            if number[j] < number[lowest_value_index]:
                lowest_value_index = j
        # Swap values of the lowest unsorted element with the first unsorted
        # elements
        number[i], number[lowest_value_index] = number[lowest_value_index], number[i]


random_list_of_nums = [12, 8, 3, 20, 11, 55, 77, 33, 22, 5, 6, 10, 23, 99, 100]
selection_sort(random_list_of_nums)
print(random_list_of_nums)
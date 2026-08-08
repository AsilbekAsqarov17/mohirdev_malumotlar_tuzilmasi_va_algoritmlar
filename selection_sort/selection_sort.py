#Asilbek Asqarov
#Mohirdev Maʻlumotlar Tuzilmasi va Algoritmlar darslari
#dars-04
#Selection sort

def selection_sort(arr):
    n = len(arr)

    for i in range(n):
        max_index = i

        for j in range(i + 1, n):
            if arr[max_index] < arr[j]:
                max_index = j
        arr[max_index] , arr[i] = arr[i] , arr[max_index]
    
    return arr

num_list = [12, 45, 34, 57, 89, 26, 92]
print(selection_sort(num_list))


#Asilbek Asqarov
#Mohirdev Maʻlumotlar Tuzilmasi va Algoritmlar darslari
#Merge sort

def merge_sort(arr):
    if len(arr) < 2:
        return arr

    middle = len(arr) // 2
    left = arr[:middle]
    right = arr[middle:]

    merge_sort(left)
    merge_sort(right)
    i = j = k = 0
    while i < len(left) and j < len(right):
        if left[i] < right[j]:
            arr[k] = left[i]
            i += 1
        else:
            arr[k] = right[j]
            j += 1
        k += 1

    while i < len(left):
        arr[k] = left[i]
        i += 1
        k += 1

    while j < len(right):
        arr[k] = right[j]
        j += 1
        k += 1


    return arr

arr = [23, 7, 1, 45, 10, 56, 4, 99, 8, 12, 78, 3, 6] 
print(merge_sort(arr))

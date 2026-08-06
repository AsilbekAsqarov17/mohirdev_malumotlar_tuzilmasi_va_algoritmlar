#Asilbek Asqarov
#Mohirdev Maʻlumotlar Tuzilmasi va Algoritmlar darslari
#dars-11
#Bubble sort

def bubble_sort(arr:list):

    for i in range(len(arr), 0, -1) :
        for j in range(i - 1):
            if arr[j] > arr[j + 1]:
                arr[j] , arr[j + 1] = arr[j + 1] , arr[j]
    return arr

myList = [23, 7, 1, 45, 10, 56, 4, 99, 8, 12, 78, 3, 6] 
print("Sorted array with Bubble Sort: ", bubble_sort(myList))

            
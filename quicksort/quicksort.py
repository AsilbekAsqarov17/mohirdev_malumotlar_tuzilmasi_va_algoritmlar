#Asilbek Asqarov
#Mohirdev Maʻlumotlar Tuzilmasi va Algoritmlar darslari
#dars-010
#Quicksort in array with recursion
from random import randrange

def quicksort(arr:list):
    if len(arr) < 2:
        return arr
    
    pivot = arr.pop(randrange(len(arr)))
    greater = [i for i in arr if i >= pivot]
    smaller = [i for i in arr if i <= pivot]

    return quicksort(smaller) + [pivot] + quicksort(greater)

myList = [23, 7, 1, 45, 10, 56, 4, 99, 8, 12, 78, 3, 6] 
print("Sorted list using using Quicksort: ", quicksort(myList))

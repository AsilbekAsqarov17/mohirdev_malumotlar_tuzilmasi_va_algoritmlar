#Asilbek Asqarov
#Mohirdev Maʻlumotlar Tuzilmasi va Algoritmlar darslari
#dars-09
#Binary search of element in array with recursion

def binary_search(arr:list, target):
    if len(arr) == 0:
        return "List empty or Not found!"
    middle = len(arr) // 2
    
    if target == arr[middle]:
        return True
    elif target < arr[middle]:
        return binary_search(arr[:middle], target)
    elif target > arr[middle]:
        return binary_search(arr[middle + 1:], target)

        
myList = [1,3,4,6,7,8,10,12,23,45,56,78,99] 
print(binary_search(myList, 23))



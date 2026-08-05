#Asilbek Asqarov
#Mohirdev Maʻlumotlar Tuzilmasi va Algoritmlar darslari
#dars-09
#Number of element in array with recursion

def size_of_list(arr:list):
    if not arr:
        return 0
    arr.pop()
    return 1 + size_of_list(arr)

arr = [12, 34, 15]
print(size_of_list(arr))
 
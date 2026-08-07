#Asilbek Asqarov
#Mohirdev Maʻlumotlar Tuzilmasi va Algoritmlar darslari
#dars-2-02

#task2
def find_index_binary(mylist, target):
    left = 0
    right = len(mylist) - 1
    while left <= right:
        middle = (left + right) // 2
        if mylist[middle] == target:
            return middle
        elif mylist[middle] < target:
            left = middle + 1
        else:
            right = middle - 1
    return -1

myList = [1,3,4,6,7,8,10,12,23,45,56,78,99] 
myList.sort() #binary search works on sorted list that's why 
print(find_index_binary(myList, 55))
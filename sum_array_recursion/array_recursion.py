#Asilbek Asqarov
#Mohirdev Maʻlumotlar Tuzilmasi va Algoritmlar darslari
#dars-08
#Sum of elements in array with recursion

def sum_of_array(nums:list):
    if len(nums) == 0:
        return 0
    elif len(nums) == 1:
        return nums[0]
    return nums.pop() + sum_of_array(nums)



def sum_array(nums:list):
    if not nums:
        return 0
    return nums.pop() + sum_array(nums)

arr = [5, 8, 12, 22] 
print(sum_of_array(arr))
arr = [5, 8, 12, 22] 
print(sum_array(arr))

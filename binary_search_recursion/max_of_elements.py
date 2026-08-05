#Asilbek Asqarov
#Mohirdev Maʻlumotlar Tuzilmasi va Algoritmlar darslari
#dars-09
#Max of element in array with recursion

def max_element(nums:list):
    if len(nums) == 1:
        return nums[0]
    
    if nums[0] > nums[1]:
        nums.pop(1)
    elif nums[0] < nums[1]:
        nums.pop(0)

    return max_element(nums)


arr = [12, 34, 15]
print(max_element(arr))




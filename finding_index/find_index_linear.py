#Asilbek Asqarov
#Mohirdev Maʻlumotlar Tuzilmasi va Algoritmlar darslari
#dars-2-01

#task1 Linear search
def find_index_linear(furits, find):
    index = 0
    for i in fruits:
        if i == find:
            return index
        index += 1
    return -1   
fruits = [
    "apple",
    "banana",
    "cherry",
    "peach",
    "apricot",
    "pomegranate",
    "grape",
    "melon",
    "watermelon",
    "lemon"
]

print(find_index_linear(fruits, "melon"))
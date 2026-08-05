#Asilbek Asqarov
#Mohirdev Maʻlumotlar Tuzilmasi va Algoritmlar darslari
#dars-1

#task1
def addNums(num1, num2):
    summa = num1 + num2
    return summa

#task2
def largest(num1, num2, num3):
    if num1 > num2:
        if num1 > num3:
            return num1 
        else: 
            return num3
    else:
        if num2 > num3:
            return num2
        else:
            return num3
    
#task3

def factorial(num):
    fact, i = 1,1
    while i <=num:
        fact = fact * i 
        i = i + 1
    return fact

print(factorial(5))

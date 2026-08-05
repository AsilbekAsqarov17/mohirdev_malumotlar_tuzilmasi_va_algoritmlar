#Asilbek Asqarov
#Mohirdev Maʻlumotlar Tuzilmasi va Algoritmlar darslari
#dars-05
#Factorial with recursion

def factorial(n):
    if n<=1:
        return n
    return n * factorial(n-1)

print(factorial(10))

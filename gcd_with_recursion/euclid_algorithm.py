#Asilbek Asqarov
#Mohirdev Maʻlumotlar Tuzilmasi va Algoritmlar darslari
#dars-07
#Euclid algorithm with recursion

#first written algorithm 
def euc_algoritm(num1, num2):
    if num2 == 0:
        return num1
    elif num1 > num2:
        temp = num2
        num2 = num1 % num2
        num1 = temp
        return euc_algoritm(num1, num2)
    elif num2 > num1:
        temp = num1
        num1 = num2 % num1
        num2 = temp
        return euc_algoritm(num1, num2)
    else:
        return num1
    
#better version
def euclid_algorithm(a, b):
    if b == 0:
        return a
    return euclid_algorithm(b, a % b)



    
print(euc_algoritm(45, 27))   
print(euclid_algorithm(45, 27))




// Asilbek Asqarov
// Mohirdev Maʻlumotlar Tuzilmasi va Algoritmlar darslari
// dars - 07
// Euclid algorithm with recursion

// first written algorithm
#include <iostream>

int euc_algorithm(int num1, int num2)
{
    if (num2 == 0)
    {
        return num1;
    }
    else if (num1 > num2)
    {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
        return euc_algorithm(num1, num2);
    }
    else if (num2 > num1)
    {
        int temp = num1;
        num1 = num2 % num1;
        num2 = temp;
        return euc_algorithm(num1, num2);
    }
    else
    {
        return num1;
    }
}
// better version
int euclid_algorithm(int num1, int num2)
{
    if (num2 == 0)
        return num1;
    return euclid_algorithm(num2, num1 % num2);
}

int main()
{
    int num1 = 45;
    int num2 = 27;
    std::cout << "GCD(" << num1 << "," << num2 << "): " << euc_algorithm(num1, num2) << std::endl;
    std::cout << "GCD(" << num1 << "," << num2 << "): " << euclid_algorithm(num1, num2) << std::endl;
}
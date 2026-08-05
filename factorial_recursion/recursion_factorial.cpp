// Asilbek Asqarov
// Mohirdev Maʻlumotlar Tuzilmasi va Algoritmlar darslari
// dars - 05
// Factorial with recursion
#include <iostream>

int factorial(int num)
{
    if (num <= 1)
    {
        return num;
    }
    return num * factorial(num - 1);
}

int main()
{
    int num = 5;
    std::cout << "Factorial of " << num << ": " << factorial(num);
}

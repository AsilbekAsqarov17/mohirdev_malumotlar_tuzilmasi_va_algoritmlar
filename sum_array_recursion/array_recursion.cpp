// Asilbek Asqarov
// Mohirdev Maʻlumotlar Tuzilmasi va Algoritmlar darslari
// dars - 08
// Sum of elements in array with recursion

#include <iostream>
#include <vector>

int sum_of_array(std::vector<int> &arr)
{
    if (arr.empty())
    {
        return 0;
    }
    int last_value = arr.back();
    arr.pop_back();
    return last_value + sum_of_array(arr);
}

int main()
{
    std::vector<int> arr = {5, 8, 12, 22};
    std::cout << "Sum of elements in array: " << sum_of_array(arr) << std::endl;
}
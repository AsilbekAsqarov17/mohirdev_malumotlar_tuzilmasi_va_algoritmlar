// Asilbek Asqarov
// Mohirdev Maʻlumotlar Tuzilmasi va Algoritmlar darslari
// dars - 010
// Quicksort in array with recursion
#include <iostream>
#include <vector>
#include <random>

std::vector<int> quicksort(std::vector<int> arr)
{
    if (arr.size() < 2)
    {
        return arr;
    }
    int pivot_index = arr.size() / 2;
    int pivot = arr[pivot_index];

    std::vector<int> smaller, greater;

    for (int i = 0; i < arr.size(); i++)
    {
        if (i == pivot_index)
        {
            continue;
        }
        if (arr[i] <= pivot)
        {
            smaller.push_back(arr[i]);
        }
        else
        {
            greater.push_back(arr[i]);
        }
    }
    std::vector<int> sorted_smaller = quicksort(smaller);
    std::vector<int> sorted_greater = quicksort(greater);

    std::vector<int> result = sorted_smaller;
    result.push_back(pivot);
    result.insert(result.end(), sorted_greater.begin(), sorted_greater.end());

    return result;
}

int main()
{
    std::vector<int> array = {23, 7, 1, 45, 10, 56, 4, 99, 8, 12, 78, 3, 6};
    std::vector<int> sorted = quicksort(array);
    std::cout << "Sorted vector: ";
    for (int num : sorted)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}
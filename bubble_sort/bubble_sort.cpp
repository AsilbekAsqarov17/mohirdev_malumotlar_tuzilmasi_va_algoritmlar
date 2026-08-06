// Asilbek Asqarov
// Mohirdev Maʻlumotlar Tuzilmasi va Algoritmlar darslari
// dars - 11
// Bubble sort
#include <iostream>

void bubble_sort(int arr[], int size)
{
    for (int i = size; i >= 0; i--)
    {
        for (int j = 0; j < i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    int arr[] = {23, 7, 1, 45, 10, 56, 4, 99, 8, 12, 78, 3, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr, size);
    std::cout << "Sorted Array using bubble sort: ";
    for (int i : arr)
    {
        std::cout << i << " ";
    }
}
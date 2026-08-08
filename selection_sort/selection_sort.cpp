// Asilbek Asqarov
// Mohirdev Maʻlumotlar Tuzilmasi va Algoritmlar darslari
// dars - 04
// Selection sort

#include <iostream>
using namespace std;

void selection_sort(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[min_index] > arr[j])
                min_index = j;
        }
        int temp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = temp;
    }
}

int main()
{
    int num_list[] = {12, 45, 34, 57, 89, 26, 92};
    int n = sizeof(num_list) / sizeof(num_list[0]);

    cout << "List: ";
    for (int i = 0; i < n; i++)
    {
        cout << num_list[i] << " ";
    }

    selection_sort(num_list, n);

    cout << "Sorted List: ";
    for (int i = 0; i < n; i++)
    {
        cout << num_list[i] << " ";
    }

    return 0;
}
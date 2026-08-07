// Asilbek Asqarov
// Mohirdev Maʻlumotlar Tuzilmasi va Algoritmlar darslari
// Merge sort
#include <iostream>
#include <vector>
void merge(std::vector<int> &arr, int left, int middle, int right)
{
    int n1 = middle - left + 1;
    int n2 = right - middle;

    std::vector<int> l(n1), r(n2);

    for (int i = 0; i < n1; i++)
    {
        l[i] = arr[left + i];
    }
    for (int j = 0; j < n2; j++)
    {
        r[j] = arr[middle + 1 + j];
    }

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2)
    {
        if (l[i] < r[j])
        {
            arr[k] = l[i++];
        }
        else
        {
            arr[k] = r[j++];
        }
        k++;
    }

    while (i < n1)
    {
        arr[k++] = l[i++];
    }
    while (j < n2)
    {
        arr[k++] = r[j++];
    }
}

void merge_sort(std::vector<int> &arr, int left, int right)
{
    if (left >= right)
    {
        return;
    }

    int middle = left + (right - left) / 2;
    merge_sort(arr, left, middle);
    merge_sort(arr, middle + 1, right);
    merge(arr, left, middle, right);
}

int main()
{
    std::vector<int> arr = {23, 7, 1, 45, 10, 56, 4, 99, 8, 12, 78, 3, 6};
    merge_sort(arr, 0, arr.size() - 1);

    for (int x : arr)
    {
        std::cout << x << " ";
    }
    return 0;
}
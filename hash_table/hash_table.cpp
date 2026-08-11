// Asilbek Asqarov
// Mohirdev Maʻlumotlar Tuzilmasi va Algoritmlar darslari
// Hash Table
// Unordered map is also another way of representing hash-table in programming language c++
#include <iostream>
#include <unordered_map>

int main()
{
    std::unordered_map<std::string, int> store;
    store["apple"] = 10000;
    store["melon"] = 30000;
    store["orange"] = 23000;
    store.insert({"banana", 20000});
    store.insert({"peach", 27000});
    std::cout << "----Store----" << std::endl;
    for (const auto &[i, j] : store)
    {
        std::cout << i << ":" << j << std::endl;
    }
    return 0;
}
// Asilbek Asqarov
// Mohirdev Maʻlumotlar Tuzilmasi va Algoritmlar darslari
// Graph data search
#include <iostream>
#include <unordered_map>
#include <vector>
#include <deque>
#include <unordered_set>

void search(std::unordered_map<std::string, std::vector<std::string>> &graph,
            std::string start_node = "siz",
            std::string target = "elon musk")
{

    std::deque<std::string> search_queue;

    for (const std::string &friend_name : graph[start_node])
    {
        search_queue.push_back(friend_name);
    }

    std::unordered_set<std::string> searched;

    while (!search_queue.empty())
    {
        std::string person = search_queue.front();
        search_queue.pop_front();
        if (searched.find(person) == searched.end())
        {
            if (person == target)
            {
                std::cout << person << " found!" << std::endl;
                return;
            }
            else
            {
                std::vector<std::string> &friends = graph[person];
                search_queue.insert(search_queue.end(), friends.begin(), friends.end());
                searched.insert(person);
            }
        }
    }
    std::cout << "Not Found!" << std::endl;
}

int main()
{
    std::unordered_map<std::string, std::vector<std::string>> graph;
    graph["siz"] = {"ali", "vali", "tohir"};
    graph["ali"] = {"aziza", "olim"};
    graph["vali"] = {"botir", "ziyoda"};
    graph["tohir"] = {"elon musk", "mohir"};
    graph["olim"] = {};
    graph["aziza"] = {};
    graph["botir"] = {};
    graph["ziyoda"] = {"aziza"};
    graph["elon musk"] = {};
    graph["mohir"] = {};

    search(graph);

    return 0;
}
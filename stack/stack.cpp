// Asilbek Asqarov
// Mohirdev Maʻlumotlar Tuzilmasi va Algoritmlar darslari
// dars - 06
// Building Stack
#include <iostream>
#include <string>

class Node
{
public:
    std::string data;
    Node *next;

    Node(std::string val) : data(val), next(nullptr) {}
};

// Stack with Linked list type connecting data
class stack
{
public:
    Node *head;
    int limit;
    int size = 0;

    stack(int l)
    {
        head = nullptr;
        limit = l;
        size = 0;
    }

    void pprint()
    {
        if (isEmpty())
        {
            std::cout << "Stack is empty!" << std::endl;
            return;
        }

        Node *temp = head;
        std::cout << "---Stack---" << std::endl;
        while (temp != nullptr)
        {
            std::cout << temp->data << std::endl;
            temp = temp->next;
        }
    };
    void push(std::string new_data)
    {
        if (isFull())
        {
            std::cout << "Overflow! Stack is full! Cannot add";
            return;
        }
        Node *new_node = new Node(new_data);
        new_node->next = head;
        head = new_node;
        size++;
    }

    std::string pop()
    {
        if (isEmpty())
        {
            std::cout << "Stack is Empty! Cannot delete node!";
            return "";
        }
        Node *temp = head;
        std::string value = head->data;
        head = head->next;
        delete temp;
        size--;
        return value;
    }
    bool isEmpty()
    {
        return size == 0;
    }

    bool isFull()
    {
        return size >= limit;
    }

    std::string peek()
    {
        if (isEmpty())
        {
            std::cout << "Stack is empty! Cannt see last node!";
            return "";
        }
        return head->data;
    }
};

int main()
{
    stack s1(4);
    s1.push("Hasan");
    s1.push("Husan");
    s1.push("Anvar");
    s1.push("Botir");
    s1.pprint();

    s1.push("Bilol");
    s1.pprint();
}
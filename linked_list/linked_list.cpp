#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};

class LinkedList
{
public:
    Node *head;

    LinkedList() { head = nullptr; }

    void pprint()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }

    void push(int new_data)
    {
        Node *new_node = new Node(new_data);
        new_node->next = head;
        head = new_node;
    }

    void add_after(Node *prev_node, int new_data)
    {
        if (prev_node == nullptr)
        {
            cout << "No node!" << endl;
            return;
        }
        Node *new_node = new Node(new_data);
        new_node->next = prev_node->next;
        prev_node->next = new_node;
    }

    void append(int new_data)
    {
        Node *new_node = new Node(new_data);
        if (head == nullptr)
        {
            head = new_node;
            return;
        }
        Node *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }

    void deleteNode(int key)
    {
        Node *temp = head;
        Node *prev = nullptr;

        if (temp != nullptr && temp->data == key)
        {
            head = temp->next;
            delete temp;
            return;
        }

        while (temp != nullptr && temp->data != key)
        {
            prev = temp;
            temp = temp->next;
        }

        if (temp == nullptr)
            return;

        prev->next = temp->next;
        delete temp;
    }
};

int main()
{
    LinkedList ll;
    ll.append(10);
    ll.append(12);
    ll.append(19);
    ll.pprint();
    ll.push(5);
    ll.pprint();
    ll.append(20);
    ll.pprint();
    ll.add_after(ll.head, 7);
    ll.pprint();

    ll.deleteNode(10);

    ll.pprint();
    return 0;
}
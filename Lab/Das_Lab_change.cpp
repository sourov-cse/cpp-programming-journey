#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

int main()
{
    Node* head = new Node;
    Node* second = new Node;
    Node* third = new Node;

    head->data = 100;
    head->next = second;

    second->data = 200;
    second->next = third;

    third->data = 400;
    third->next = nullptr;

    // Add a new node
    Node* newNode = new Node;

    newNode->data = 50;
    newNode->next = head;

    head = newNode;

    // Display the linked list
    Node* temp = head;

    while (temp != nullptr)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }

    cout << "NULL";

    return 0;
}
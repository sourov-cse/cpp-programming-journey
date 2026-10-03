#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

int main()
{
    Node* a = new Node(1);
    Node* b = new Node(7);
    Node* c = new Node(3);

    a->next =b;
    b->next =c;

    Node* head =a;

    cout << head-> data <<endl; //1
    cout << head-> next-> data << "\n"; //7

    Node *temp = head;
    while (temp !=NULL){
        cout << temp-> data << endl;
        temp = temp -> next;
    }
    
    return 0;
}
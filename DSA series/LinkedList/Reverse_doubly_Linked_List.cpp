#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node() {}
    // constructor for initializing data variables
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};
// this function helps me to insert data int the starting of the node
void insertAtHead(Node *&head, Node *&tail, int data)
{
    // if we don't have any node in the starting
    if (head == NULL)
    {
        Node *temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(data);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}
// this function helps me to insert data at the ending point of the list
void insertAtTail(Node *&head, Node *&tail, int data)
{
    // is taill pointed to NULL at initial
    if (tail == NULL)
    {
        Node *temp = new Node(data);
        tail = temp;
        head = temp;
    }
    else
    {
        Node *temp = new Node(data);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertAtAnyPosition(Node *&head, Node *&tail, int data, int position)
{
    // if position is 1 means we want to insert at head
    if (position == 1)
    {
        insertAtHead(head, tail, data);
        return;
    }
    // Here we can insert at the middle of the linkedlist
    Node *temp = head;
    int count = 1;
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    // this helpe to insert at the end of the linkedlist
    if (temp->next == NULL)
    {
        insertAtTail(head, tail, data);
        return;
    }
    Node *newNode = new Node(data);
    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp;
}

// helps to print list
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
//********Reverse the Doubly Linked List*************
void reverse(Node *&head, Node *&tail)
{
    Node *current = head;
    Node *temp = nullptr;

    while (current != nullptr)
    {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }

    if (temp != nullptr)
    {
        tail = head;
        head = temp->prev;
    }
}
int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    insertAtAnyPosition(head, tail, 1, 1);
    insertAtAnyPosition(head, tail, 2, 2);
    insertAtAnyPosition(head, tail, 3, 3);
    insertAtAnyPosition(head, tail, 4, 4);
    cout << "List before reversing " << endl;
    print(head);
    reverse(head, tail);
    cout << "List after reversing " << endl;
    print(head);

    return 0;
}
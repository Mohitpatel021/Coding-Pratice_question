#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    // constructor for initializing data variables
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "memeory is free for the value " << value << endl;
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
// this function help me to delete the node from any position
void deleteNode(Node *&head, Node *&tail, int position)
{
    // This helps to delete starting node from the linked List
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next->prev = NULL;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *prev = NULL;
        Node *curr = head;
        int count = 1;
        while (count < position)
        {
            prev = curr;
            curr = curr->next;
            count++;
        }

        curr->prev = NULL;
        prev->next = curr->next;
        if (curr == tail)
        {
            tail = prev;
        }

        curr->next = NULL;
        delete curr;
    }
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
int main()
{

    Node *head = NULL;
    Node *tail = NULL;
    print(head);

    // Inserting at the beginning of the list
    insertAtHead(head, tail, 9);
    print(head);

    // Inserting at the ending of the list
    insertAtTail(head, tail, 12);
    print(head);
    // Inserting at any position in the List
    insertAtAnyPosition(head, tail, 1, 1);
    print(head);

    insertAtAnyPosition(head, tail, 13, 1);
    print(head);

    insertAtAnyPosition(head, tail, 16, 1);
    print(head);

    insertAtAnyPosition(head, tail, 18, 1);
    print(head);

    insertAtAnyPosition(head, tail, 199, 1);
    print(head);

    deleteNode(head, tail, 7);
    print(head);
    //  cout << head->data << " ";
    //  cout << tail->data;
    // cout << endl;
    // Inserting at the ending of the list
    insertAtTail(head, tail, 12);
    print(head);
    // cout << head->data << " ";
    // cout << tail->data;
    return 0;
}
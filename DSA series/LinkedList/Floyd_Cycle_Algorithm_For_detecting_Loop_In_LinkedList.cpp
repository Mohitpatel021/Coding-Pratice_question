#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    // create a node here
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for this value " << value << endl;
    }
};

// This function is for printing the linked list
void printList(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
// this function is help me to insert node in the starting of the linkedlist
void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}
// This function is used for inserting node into the ending point of the linkedlist
void insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}
// This function is used for inserting node at any point of the linkedlist
void insertAtPositon(Node *&head, Node *&tail, int position, int data)
{
    // here we can insert at starting point
    if (position == 1)
    {
        insertAtHead(head, data);
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
        insertAtTail(tail, data);
        return;
    }
    Node *newNode = new Node(data);
    newNode->next = temp->next;
    temp->next = newNode;
}
void deleteNode(Node *&head, int position, Node *&tail)
{
    // This helps to delete starting node from the linked List
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
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

        prev->next = curr->next;
        if (curr == tail)
        {
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}
// For checking the list is circular or not
bool isCircular(Node *&head)
{
    if (head == NULL)
    {
        return true;
    }
    Node *temp = head->next;
    while (temp != NULL && temp != head)
    {
        temp = temp->next;
    }
    if (temp == head)
    {
        return true;
    }
    return false;
}
// for detecting loop inside the list using ********TWo Pointer approch OR called as FLOYD CYCLE ALGORITHM********
bool floydCycleAlogrithms(Node *&head)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && slow != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;

        if (fast == slow)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    Node *obj1 = new Node(10);
    Node *head = obj1;
    Node *tail = obj1;
    // insert data into tail
    insertAtPositon(head, tail, 2, 20);
    insertAtPositon(head, tail, 3, 30);
    insertAtPositon(head, tail, 4, 40);
    insertAtPositon(head, tail, 5, 50);
    printList(head);
    // deleting first node from the lsit
    // deleteNode(head, 1, tail);
    // deleteNode(head, 1, tail);
    // deleteNode(head, 3, tail);

    // this statement make this list circular
    tail->next = head->next;
    /*
       printList(head);
        //This condition is checking for the list is circular or not
        if (isCircular(head))
        {
            cout << "Linked list is circular " << endl;
        }
        else
        {
            cout << "Linded List is not ciruclar " << endl;
        }
//this will check wheatehr the list is having Loop or note
    if (floydCycleAlogrithms(head))
    {
        cout << "Loop is present" << endl;
    }
    else
    {
        cout << "Loop is not present" << endl;
    }  */
    return 0;
}
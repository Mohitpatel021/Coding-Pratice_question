#include <bits/stdc++.h>
#include <iostream>
#include <map>
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

        cout << "Memory is free for this value " << endl;
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
//*********Function help to sort list in terms of 0, 1 & 2
Node *SortListIn012(Node *&head)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *temp = head;
    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;

    while (temp != NULL)
    {
        if (temp->data == 0)
            zeroCount++;
        else if (temp->data == 1)
            oneCount++;
        else if (temp->data == 2)
            twoCount++;
        temp = temp->next;
    }
    temp = head;
    while (temp != NULL)
    {
        if (zeroCount != 0)
        {
            temp->data = 0;
            zeroCount--;
        }
        else if (oneCount != 0)
        {
            temp->data = 1;
            oneCount--;
        }
        else if (twoCount != 0)
        {
            temp->data = 2;
            twoCount--;
        }
        temp = temp->next;
    }
    return head;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    insertAtPositon(head, tail, 1, 1);
    insertAtPositon(head, tail, 1, 0);
    insertAtPositon(head, tail, 1, 2);
    insertAtPositon(head, tail, 1, 0);
    insertAtPositon(head, tail, 1, 2);
    insertAtPositon(head, tail, 1, 1);
    insertAtPositon(head, tail, 1, 0);
    insertAtPositon(head, tail, 1, 2);
    insertAtPositon(head, tail, 1, 1);
    insertAtPositon(head, tail, 1, 1);
    printList(head);
    SortListIn012(head);
    printList(head);
}
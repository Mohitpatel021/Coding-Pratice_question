//********************using RECURSIVE approh***************
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
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
void insertAtTail(Node *&head, Node *&tail, int data)
{
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
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
//********Cloning a list using MAP with random pointer*******
Node *copyList(Node *head)
{
    Node *cloneHead = NULL;
    Node *cloneTail = NULL;
    Node *temp = head;
    // Step1 To clone the original List without using Random pointer
    while (temp != NULL)
    {
        insertAtTail(cloneHead, cloneTail, temp->data);
        temp = temp->next;
    }
    // Step2 Store the mapping or the original list respected to clone list

    unordered_map<Node *, Node *> originalToNewNode;

    Node *originalNode = head;
    Node *cloneNode = cloneHead;

    while (originalNode != NULL)
    {
        originalToNewNode[originalNode] = cloneNode;
        cloneNode = cloneNode->next;
        originalNode = originalNode->next;
    }

    originalNode = head;
    cloneNode = cloneHead;
    while (originalNode != NULL && cloneNode != NULL)
    {
        cloneNode->arb = originalToNewNode[originalNode->arb];
        cloneNode = cloneNode->next;
        originalNode = originalNode->next;
    }

    return cloneHead;
}
int main()
{
    Node *obj = new Node(10);
    Node *head = obj;
    insertAtHead(head, 20);
    insertAtHead(head, 30);
    insertAtHead(head, 40);
    insertAtHead(head, 50);
    insertAtHead(head, 60);
    printList(head);
    return 0;
}
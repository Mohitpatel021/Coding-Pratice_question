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
//*********This is for clonning a list with random pointer********
Node *copyList(Node *head)
{
    // STEP1- create a clone node first
    Node *cloneHead = NULL;
    Node *cloneTail = NULL;

    Node *temp = head;
    while (temp != NULL)
    {
        insertAtTail(cloneHead, cloneTail, temp->data);
        temp = temp->next;
    }

    // STEP 2- add cloneNodes in between original List

    Node *originalNode = head;
    Node *cloneNode = cloneHead;
    while (originalNode != NULL && cloneNode != NULL)
    {
        // for pointing origial node to clone node
        Node *next = originalNode->next;
        originalNode->next = cloneNode;
        originalNode = next;

        // for point clone node to original node

        next = cloneNode->next;
        cloneNode->next = originalNode;
        cloneNode = next;
    }

    // STEP 3- Point the random pointer
    temp = head;
    while (temp != NULL)
    {
        if (temp->next != NULL)
        {
            temp->next->arb = temp->arb ? temp->arb->next : temp->arb;
        }
        temp = temp->next->next;
    }

    // STEP 4- Reverst chnages of step 2

    originalNode = head;
    cloneNode = cloneHead;
    while (originalNode != NULL && cloneNode != NULL)
    {
        originalNode->next = cloneNode->next;
        originalNode = originalNode->next;
        if (originalNode != NULL)
        {
            cloneNode->next = originalNode->next;
        }
        cloneNode = cloneNode->next;
    }

    // STEP 5- Return the ans
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
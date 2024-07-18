#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    // create a node here
    int data;
    Node *next;
    Node *random;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->random = NULL;
    }
};

void insertAtTail(Node *&head, Node *&tail, int d)
{
    Node *cloneNode = new Node(d);
    if (head == NULL)
    {
        head = cloneNode;
        tail = cloneNode;
    }
    else
    {
        tail->next = cloneNode;
        tail = cloneNode;
    }
}
//********************This function helps to clone a list with random pointers*********************
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
        cloneNode->random = originalToNewNode[originalNode->random];
        cloneNode = cloneNode->next;
        originalNode = originalNode->next;
    }

    return cloneHead;
}
int main()
{
    return 0;
}
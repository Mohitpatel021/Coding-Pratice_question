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
Node *solve(Node *first, Node *second)
{ // agr srf ek element h first list me tho usko second list me point kra do
    if (first->next == NULL)
    {
        first->next = second;
        return first;
    }
    Node *curr1 = first;
    Node *next1 = curr1->next;
    Node *curr2 = second;
    Node *next2 = curr2->next;
    while (next1 != NULL && next2 != NULL)
    { // ye check krega ki element chota h ya nhi
        if ((curr2->data >= curr1->data) && (curr2->data <= next1->data))
        {
            // add node in between two node
            curr1->next = curr2;
            next2 = curr2->next;
            curr2->next = next1;
            // pointer update krega ye
            curr1 = curr2;
            curr2 = next2;
        }
        else
        {
            // curr1 and next1 ko ange bdhna h
            curr1 = next1;
            next1 = next1->next;
            // check krega ki first list khtm tho nhi hui
            if (next1 == NULL)
            {
                next1->next = curr2;
                return first;
            }
        }
    }
    return first;
}

Node *sort(Node *first, Node *second)

{
    // agr first list khali h tho retrun second kr dega
    if (first == NULL)
    {
        return second;
    }
    // agr second khali h tho first return kr dega
    if (second == NULL)
    {
        return first;
    }
    // check krega konsi list ka first element chota h dusri list k elemnt se
    if (first->data <= first->data)
    {
        return solve(first, second);
    }
    else
    {
        return solve(second, first);
    }
}

int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;

    Node *head2 = NULL;
    Node *tail2 = NULL;
    insertAtPositon(head1, tail1, 1, 15);
    insertAtPositon(head1, tail1, 1, 13);
    insertAtPositon(head1, tail1, 1, 12);
    insertAtPositon(head1, tail1, 1, 8);
    insertAtPositon(head1, tail1, 1, 4);
    insertAtPositon(head1, tail1, 1, 1);
    printList(head1);

    insertAtPositon(head2, tail2, 1, 10);
    insertAtPositon(head2, tail2, 1, 8);
    insertAtPositon(head2, tail2, 1, 6);
    insertAtPositon(head2, tail2, 1, 2);
    printList(head2);
    cout << endl;
    sort(head1, head2);

    printList(head1);
}

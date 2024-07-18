#include <bits/stdc++.h>
#include <iostream>
#include <map>

//*************This algorithms is used only when your linked list is sorted***********
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
    //   here we can insert at starting point if (position == 1)
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
    // this helpe to insert at the end of the linkedlist if (temp->next == NULL)
    {
        insertAtTail(tail, data);
        return;
    }
    Node *newNode = new Node(data);
    newNode->next = temp->next;
    temp->next = newNode;
}
//********This is work in sorted Linked List***********
Node *removeDuplicate(Node *&head)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *curr = head;
    while (curr != NULL)
    {
        if ((curr->next) != NULL && ((curr->data) == (curr->next)->data))
        {
            Node *next_next = curr->next->next;
            Node *nodeToDelete = curr->next;
            delete nodeToDelete;
            curr->next = next_next;
        }
        else
        {
            curr = curr->next;
        }
    }
    return head;
}
//**************This is  work in Unsorted/Sorted Linked List**********
//***************Using Unordered Map ***************
Node *removeDuplicates(Node *head)
{
    if (head == nullptr)
    {
        return NULL;
    }
    unordered_map<int, bool> visited;
    Node *curr = head;
    Node *prev = NULL;
    while (curr != NULL)
    {
        if (visited[curr->data] != true)
        {
            visited[curr->data] = true;
            prev = curr;
            curr = curr->next;
        }
        else
        {
            prev->next = curr->next;
            curr = prev->next;
        }
    }
    return head;
}
//***********This is for unsorted/sorted  Linked List***********

Node *remove(Node *head)
{
    if (head == nullptr)
    {
        return nullptr;
    }

    Node *curr = head;

    while (curr != nullptr)
    {
        Node *prev = curr;
        Node *temp = curr->next;

        while (temp != nullptr)
        {
            if (temp->data == curr->data)
            {
                prev->next = temp->next;
                delete temp;
                temp = prev->next;
            }
            else
            {
                prev = temp;
                temp = temp->next;
            }
        }

        curr = curr->next;
    }

    return head;
}

int main()
{

    Node *obj1 = new Node(40);
    Node *head = obj1;
    Node *tail = obj1;
    // insert data into tail
    insertAtPositon(head, tail, 4, 20);
    insertAtPositon(head, tail, 5, 20);
    insertAtPositon(head, tail, 4, 20);
    insertAtPositon(head, tail, 5, 30);
    printList(head);
    remove(head);
    printList(head);
}
#include <bits/stdc++.h>
using namespace std;
//*************This algorithms is used only when your linked list is sorted***********
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
    }
};
// ************this function helps me to insert data int the starting of the node***************
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
//************ this function helps me to insert data at the ending point of the list*************
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
//********Insert at any position**********

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
//************This algorithms work in both Sorted/Un-Sorted Linked list
//***************Using Unordered Map***************
Node *removeDuplicate(Node *&head)
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
//*********This will Remove duplicate from sorted Linked List********
Node *remove(Node *&head)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *curr = head;
    while (curr != NULL)
    {
        Node *nextNode = curr->next;
        while (nextNode != NULL && nextNode->data == curr->data)
        {

            Node *temp = nextNode;
            nextNode = temp->next;
            delete temp;
        }
        curr->next = nextNode;
        curr = nextNode;
    }
    return head;
}

// print the list
void print(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
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
    insertAtAnyPosition(head, tail, 5, 1);
    insertAtAnyPosition(head, tail, 2, 1);
    insertAtAnyPosition(head, tail, 2, 1);
    insertAtAnyPosition(head, tail, 3, 1);
    insertAtAnyPosition(head, tail, 8, 1);
    insertAtAnyPosition(head, tail, 4, 1);
    insertAtAnyPosition(head, tail, 4, 1);
    print(head);
    remove(head);
    print(head);

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

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

// finding length of the linked list
int getLength(Node *head)
{
    int len = 0;
    while (head != NULL)
    {
        len++;
        head = head->next;
    }
    return len;
}

Node *findMiddle(Node *head)
{

    // return getMiddle(head);

    int len = getLength(head);
    int mid = len / 2;
    Node *temp = head;
    int cnt = 0;
    while (cnt < mid)
    {
        temp = temp->next;
        cnt++;
    }
    return temp;
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
    Node *newHead = findMiddle(head);
    cout<<newHead->data<<endl;
    return 0;
}
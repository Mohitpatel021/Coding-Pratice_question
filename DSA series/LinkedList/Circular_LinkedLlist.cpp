#include <iostream>
#include <map>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constrcutor
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }
};

void insertNode(Node *&tail, int element, int d)
{

    // empty list
    if (tail == NULL)
    {
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        // non-empty list
        // assuming that the element is present in the list

        Node *curr = tail;

        while (curr->data != element)
        {
            curr = curr->next;
        }

        // element found -> curr is representing element wala node
        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(Node *tail)
{

    Node *temp = tail;

    // empty list
    if (tail == NULL)
    {
        cout << "List is Empty " << endl;
        return;
    }
    do{
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);

    cout << endl;
}

void deleteNode(Node *&tail, int value)
{

    // empty list
    if (tail == NULL)
    {
        cout << " List is empty, please check again" << endl;
        return;
    }
    else
    {
        // non-empty

        // assuming that "value" is present in the Linked List
        Node *prev = tail;
        Node *curr = prev->next;

        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;

        // only for 1 Node Linked List
        if (curr == prev)
        {
            tail = NULL;
        }

        // for >=2 Node linked list
        else if (tail == curr)
        {
            tail = prev;
        }

        curr->next = NULL;
        delete curr;
    }
}
//For checking the list is circular or not
bool isCircular(Node *head)
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

int main()
{

    Node *tail = NULL;

    // insertNode(tail, 5, 3);
    // print(tail);

    //  insertNode(tail, 3, 5);
    // print(tail);

    /*insertNode(tail, 5, 7);
     print(tail);

     insertNode(tail, 7, 9);
     print(tail);
     cout << "tail " << tail->data << endl;

     insertNode(tail, 9, 6);
     print(tail);
     cout << "tail " << tail->data << endl;

     insertNode(tail, 9, 10);
     print(tail);
     cout << "tail " << tail->data << endl;

     insertNode(tail, 6, 4);
     print(tail);
     cout << "tail " << tail->data << endl;

     // deleteNode(tail, 5);
     print(tail);
     */

    // Condition for checking that the linked lIst is circular or not
    if (isCircular(tail))
    {
        cout << "circular" << endl;
    }
    else
    {
        cout << "not circular" << endl;
    }

    return 0;
}

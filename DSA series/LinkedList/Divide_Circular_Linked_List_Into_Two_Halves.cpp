#include <iostream>
#include <map>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->next = nullptr;
    }
    ~Node()
    {
        cout << "Memory is freed for node with data " << data << endl;
    }
};

void insertNode(Node *&tail, int element, int d)
{
    if (tail == nullptr)
    {
        Node *newNode = new Node(d);
        newNode->next = newNode;
        tail = newNode;
        return;
    }

    Node *curr = tail;
    do
    {
        if (curr->data == element)
        {
            Node *temp = new Node(d);
            temp->next = curr->next;
            curr->next = temp;
            return;
        }
        curr = curr->next;
    } while (curr != tail);

    cout << "Element not found in the list." << endl;
}

void print(Node *head)
{
    if (head == nullptr)
    {
        cout << "List is Empty" << endl;
        return;
    }

    Node *temp = head;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);

    cout << endl;
}

void split(Node *&head, Node *&newhead1, Node *&newhead2)
{
    if (head == NULL)
    {
        return;
    }

    Node *fast = head;
    Node *slow = head;
    while (fast->next != head)
    {
        fast = fast->next;
        if (fast->next != head)
        {
            fast = fast->next;
        }
        slow = slow->next;
    }
    // THis is for first half head
    newhead1 = head;
    cout << "first half ka  new head " << newhead1->data << endl;
    newhead2 = slow->next;
    cout << "slow ka data " << slow->data << endl;
    cout << "secod half ka  new head " << newhead2->data << endl;
    slow->next = head;
    cout << "slow k next ka data " << slow->next->data << endl;
    fast->next = newhead2;
    cout << "fast yaha point kr rha h " << fast->next->data << endl;
}

int main()
{
    Node *head = nullptr;

    insertNode(head, 5, 3);
    insertNode(head, 3, 5);
    insertNode(head, 5, 7);
    insertNode(head, 7, 9);
    insertNode(head, 9, 6);
    insertNode(head, 9, 10);
    insertNode(head, 6, 4);
    print(head);

    Node *firstHalf = nullptr;
    Node *secondHalf = nullptr;

    split(head, firstHalf, secondHalf);

    cout << "Ab me First half list print krne ja rha hu:- ";
    print(firstHalf);
    cout << endl;
    cout << "ab me second half list print krne ja rha hu :-";
    print(secondHalf);

    return 0;
}

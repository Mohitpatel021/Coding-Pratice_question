#include <bits/stdc++.h>

struct Node
{
    int data;
    Node *next;
    Node(int val) : data(val), next(nullptr) {}
};

class CircularLinkedList
{
private:
    Node *head;

public:
    CircularLinkedList() : head(nullptr) {}

    // Function to append a node to the end of the circular linked list
    void append(int val)
    {
        Node *newNode = new Node(val);
        if (!head)
        {
            head = newNode;
            head->next = head; // Circular reference to itself
        }
        else
        {
            Node *current = head;
            while (current->next != head)
            {
                current = current->next;
            }
            current->next = newNode;
            newNode->next = head;
        }
    }

    // Function to print the circular linked list
    void display()
    {
        if (!head)
        {
            return;
        }

        Node *current = head;
        do
        {
            std::cout << current->data << " -> ";
            current = current->next;
        } while (current != head);
        std::cout << " (Head)" << std::endl;
    }

    // Function to remove duplicates from the sorted circular linked list
    void removeDuplicates()
    {
        if (!head || !head->next)
        {
            return; // Empty or single-node list has no duplicates
        }

        Node *current = head;
        do
        {
            Node *nextNode = current->next;

            // If adjacent nodes have the same data, remove the duplicate node
            if (current->data == nextNode->data)
            {
                Node *duplicate = nextNode;
                current->next = nextNode->next;
                delete duplicate;
            }
            else
            {
                current = current->next;
            }
        } while (current->next != head);
    }
};

int main()
{
    CircularLinkedList list;
    list.append(1);
    list.append(2);
    list.append(2);
    list.append(3);
    list.append(3);
    list.append(4);

    std::cout << "Original circular linked list:" << std::endl;
    list.display();

    list.removeDuplicates();

    std::cout << "Circular linked list after removing duplicates:" << std::endl;
    list.display();

    return 0;
}
